class Solution {
public:
    string clearDigits(string s) {
        string check;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                check.pop_back();
            }
            else
            {
            check+=s[i];
            }
        }
        return check;
    }
};
