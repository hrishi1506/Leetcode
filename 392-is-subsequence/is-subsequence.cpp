class Solution {
public:
    bool isSubsequence(string s, string t) {
       int cnt = s.size();
       int i = 0 , j = 0;

       while(i < s.size() && j < t.size()){
        if(s[i] == t[j]){
            cnt--;
            i++;
            j++;
        }
        else{
        j++;
        }
       }
       return cnt==0;
    }
};