class Solution {
public:
    bool isOperator(string s) {
        return (s == "+" || s == "-" || s == "*" || s == "/" || s == "^");
    }

    int evaluatePostfix(vector<string>& arr) {
        stack<int> st;

        for (int i = 0; i < arr.size(); i++) {
            if (!isOperator(arr[i])) {
                st.push(stoi(arr[i]));
            } 
            else {
                int o2 = st.top(); st.pop();   
                int o1 = st.top(); st.pop();   

                if (arr[i] == "+") st.push(o1 + o2);
                else if (arr[i] == "-") st.push(o1 - o2);
                else if (arr[i] == "*") st.push(o1 * o2);
                else if (arr[i] == "/") {
                    int result = o1 / o2;

                    if ((o1 % o2 != 0) && ((o1 < 0) ^ (o2 < 0)))
                        result--;
                    
                    st.push(result);
                }
                else if (arr[i] == "^") {
                    int result = 1;
                    for(int j = 0; j < o2; j++)
                        result *= o1;
                    st.push(result);
                }
            }
        }

        return st.top();
    }
};
