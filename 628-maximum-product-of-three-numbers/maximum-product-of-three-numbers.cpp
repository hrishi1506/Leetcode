class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mx1 = nums[n-1] , mx2 = nums[n-2] , mx3 = nums[n-3];
        int mn1 = nums[0] , mn2 = nums[1];

        return max(mx1*mx2*mx3 , mn1*mn2*mx1);
        
    }
};