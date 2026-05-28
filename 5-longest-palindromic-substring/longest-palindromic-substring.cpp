class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int st = 0;
        int maxLen = 0;

        auto expand = [&](int l , int r){
            
            while(l >= 0 && r < n && s[l] == s[r]){
                if(r-l+1 > maxLen){
                    maxLen = r-l+1;
                    st = l;
                }
                l--;
                r++;
            }
        };

        for(int i = 0 ; i < n ; i++){
            expand(i,i);
            expand(i,i+1);
        }

        return s.substr(st,maxLen);
        
    }
};