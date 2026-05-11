class Solution {
    bool valid(int n){
        string str = to_string(n);

        int sum = 0;
        for(int i = 0 ; i < str.size() ; i++){
            sum += str[i] - '0';
        }

        return sum%2 == 0;
    }
public:
    int countEven(int num) {
        
        int cnt = 0;
        for(int i = 1 ; i <= num ; i++){
            if(valid(i)){
                cnt++;
            }
        }

        return cnt;
    }
};