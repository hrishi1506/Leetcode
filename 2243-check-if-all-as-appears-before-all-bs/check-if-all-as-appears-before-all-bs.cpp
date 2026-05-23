class Solution {
public:
    bool checkString(string s) {
        int n = s.size();

        int cnt = 0;
        for(int i  = 0 ; i < n ; i++){
            if(s[i] == 'a' && cnt != 0){
                return false;
            }
            else if(s[i] == 'b'){
                cnt++;
            }
        }

        return true;
    }
};