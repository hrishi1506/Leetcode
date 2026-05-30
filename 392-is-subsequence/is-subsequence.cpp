class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;

        int c = s.size();

        while(j < t.size()){
            if(s[i] == t[j]){
                i++;
                j++;
                c--;
            }
            else{
                j++;
            }
        }
        return c == 0;
    }
};