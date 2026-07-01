class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int s = reduce(nums.begin(),nums.end());
        return s%k;
    }
};