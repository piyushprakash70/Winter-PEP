class Solution {
public:
    bool isOperator(string s) {
        return (s == "+" || s == "-" || s == "*" || s == "/" || s == "^");
    }

    int evaluatePrefix(vector<string>& arr) {
        int n = arr.size();
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            if (!isOperator(arr[i])) {
                st.push(stoi(arr[i]));
            } else {
                int o1 = st.top(); st.pop();
                int o2 = st.top(); st.pop();

                if (arr[i] == "+") st.push(o1 + o2);
                else if (arr[i] == "-") st.push(o1 - o2);
                else if (arr[i] == "*") st.push(o1 * o2);
                else if (arr[i] == "/") {
                    int result = o1 / o2;
                    if ((o1 % o2 != 0) && ((o1 < 0) ^ (o2 < 0)))
                        result--;
                    st.push(result);
                }
                else if (arr[i] == "^") st.push((int)pow(o1, o2));
            }
        }
        return st.top();
    }
};
