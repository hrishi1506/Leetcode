class Solution {
public:
    int minRange(int a, int b, int c) {
        int maxEle = max({a,b,c});
        int minEle = min({a,b,c});
        int ans = maxEle-minEle;

        maxEle = min(maxEle , a+b+c - maxEle);

        return maxEle-minEle;
    }
};