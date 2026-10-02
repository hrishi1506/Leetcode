class Solution {
    void solve(int o , int c , vector<string>&ans,string s){
        if(o == 0 && c == 0){
            ans.push_back(s);
            return;
        }
        if(o != 0){
            string op1 = s;
            op1.push_back('(');
            solve(o-1,c,ans,op1);
        }

        if(o < c){
            string op1 = s;
            op1.push_back(')');
            solve(o,c-1,ans,op1);
        }

        return ;
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        solve(n,n,ans,"");
        return ans;
    }
};