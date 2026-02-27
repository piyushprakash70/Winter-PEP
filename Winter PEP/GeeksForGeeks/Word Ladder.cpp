class Solution {
  public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        unordered_set<string> st(wordList.begin(), wordList.end());
        queue<pair<string, int>> q;
        q.push(make_pair(startWord, 1));
        st.erase(startWord);
        
        while(!q.empty()){
            string str= q.front().first;
            int count= q.front().second;
            q.pop();
            if(str==targetWord)
            return count;
            for(int i=0; i<str.size(); i++){
                char original= str[i];
                for(char ch='a'; ch<='z'; ch++){
                    str[i]=ch;
                    if(st.find(str)!=st.end()){
                        q.push(make_pair(str, count+1));
                        st.erase(str);
                    }
                }
                str[i]= original;
            }
        }
        return 0;
    }
};

