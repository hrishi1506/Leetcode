class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char &ch : s){
            if(st.size() > 0 && ch == '*') st.pop();

            else st.push(ch);
        }

        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};