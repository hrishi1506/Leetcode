class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();

        for(int i = 0 ; i < n; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else if(st.size() == 0) return false;
            else {
                char val = st.top();
                st.pop();

                if(val == '(' && s[i] != ')' || val == '{' && s[i] != '}' || val == '[' && s[i] != ']') return false;
            }
        }
        return st.size()==0;
    }
};