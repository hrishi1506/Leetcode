class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;
        
        int tot = 0 , mov = 0;

        for(int i = 10 ; i >= 0 ; i--){
            tot += i;
            if(tot > n) break;
            mov++;
        }
        return mov%2==1;
    }
};