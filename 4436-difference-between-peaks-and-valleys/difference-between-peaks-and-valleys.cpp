class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int p = 0 ;
        int v = 0;

        for(int i = 1 ; i < nums.size()-1 ; i++){
            if(nums[i] < nums[i-1] && nums[i] < nums[i+1])
                v+=nums[i];
            else if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
                p += nums[i];
        }

        return p-v;
    }
};