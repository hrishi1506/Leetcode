class Solution {
public:
    string processStr(string s) {
        string ans = "";

        for(char &ch : s){
            if(ch == '*'){
                if(ans.size()!=0){
                    ans.pop_back();
                }
            }
            else if(ch == '#'){
                if(ans.size() != 0){
                    ans += ans;
                }
            }

            else if(ch == '%'){
                reverse(ans.begin(),ans.end());
            }

            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};