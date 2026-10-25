class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int i = 0 , j = 0;
        int n = nums.size();
        long long c = 0;

        while(j < n){

            if(nums[j] >= minK && nums[j] <= maxK)
                c += j-i+1;
            else{
                i = j+1;
            }
            j++;
        }
        return c;
    }
};