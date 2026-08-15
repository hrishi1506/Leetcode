class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int k = 0;
        int n = nums.size();

        bool hasZero = false;
        for(int x : nums){
            k ^= x;
            if(x != 0)
                hasZero = true;
        }
        if(!hasZero) return 0;
        return (k == 0) ?  n-1 :  n;
     }
};