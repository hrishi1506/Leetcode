class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>lastLow(26,-1);
        vector<int>firstUp(26,-1);
        unordered_set<int>st;

        for(int i =0 ; i < word.size() ; i++){
            char ch = word[i];

            if(ch >= 'a' && ch <= 'z'){
                int idx = ch - 'a';

                lastLow[idx] = i;

                if(firstUp[idx] != -1){
                    st.insert(idx);
                }
            }
            else {
                int idx = ch - 'A';

                if(firstUp[idx] == -1){
                    firstUp[idx] = i;
                }
            }
        }
        int c = 0;
        for(int i = 0 ; i < 26 ; i++){
            if(lastLow[i] != -1 && firstUp[i] != -1 && !st.count(i)){
                c++;
            }
        }
        return c;
    }
};