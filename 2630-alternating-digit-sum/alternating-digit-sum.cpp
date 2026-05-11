class Solution {
public:
    int alternateDigitSum(int n) {
        string str = to_string(n);
        int sum = 0;

        for(int i = 0 ; i < str.size() ; i++){
            int d = str[i] - '0';

            if(i % 2 == 0){
                sum += d;
            }
            else{
                sum -= d;
            }
        }
        return sum;
    }
};