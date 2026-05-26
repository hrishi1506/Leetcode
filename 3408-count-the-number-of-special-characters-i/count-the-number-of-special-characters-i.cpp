class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> low ( 26, false);
        vector<bool> upp(26,false);

        for(char ch : word){
            if(ch >= 'a' && ch <= 'z'){
                low[ch-'a'] = true;;
            }
            else{
                upp[ch - 'A'] = true;
            }
        }

        int cnt = 0;
        for(int i =0 ; i < 26 ; i++){
            if(low[i] && upp[i]){
                cnt++;
            }
        }

        return cnt;


    }
};