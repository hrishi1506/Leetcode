class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;

        for(int i = 0 ; i < s.size() ; i++){
            int idx = 26 + ('a' - s[i]);
            idx *= i+1;
            sum += idx;
        }
        return sum;
    }
};