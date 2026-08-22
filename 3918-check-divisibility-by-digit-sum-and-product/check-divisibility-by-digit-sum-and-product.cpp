class Solution {
public:
    bool checkDivisibility(int n) {
        int a = 0;
        int m = 1;

        int x = n;

        while(x != 0){
            int d = x % 10;
            a += d;
            m *= d;

            x /= 10;
        }
        int s = a+m;
        return n%s == 0;
    }
};