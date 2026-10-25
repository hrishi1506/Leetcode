class Solution {
public:
    int calculateScore(int a, int b) {
        int a1 = __builtin_popcount(a);
        int b1 = __builtin_popcount(b);

        if(a1 >= b1)
            return a1*b1;
        return b1/a1;
    }
};