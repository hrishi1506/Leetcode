class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i = 0 ; i <= n ; i++){
            int num = __builtin_popcount(i);
            ans.push_back(num);
        }
        return ans;
    }
};