class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if(n <= 8) return n;

        int c = 0;
        for(int i = 1 ; i <= n ; i++){
            if(i <= 8){
                c++;
            }
            else if(i > 8 && i <= 16){
                c += 2;
            }
            else if(i > 16 && i <= 24){
                c += 3;
            }
            else{
                c+= 4;
            }
        }
        return c;
    }
};