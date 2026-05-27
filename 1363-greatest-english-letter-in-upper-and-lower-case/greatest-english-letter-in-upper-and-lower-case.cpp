class Solution {
public:
    string greatestLetter(string s) {
        set<char> st(s.begin(),s.end());

        string ans = "";
        for(char ch = 'Z' ; ch >= 'A' ; ch--){
            if(st.count(ch) && st.count(tolower(ch))){
                return string(1,ch);
            }
        }
        return "";
    }
};