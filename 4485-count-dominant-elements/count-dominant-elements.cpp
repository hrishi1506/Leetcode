class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        if(n == 1) return 1;
        if(nums[0] >= nums[1]) cnt++;
        if(nums[n-1] >= nums[n-2]) cnt++;

        for(int i = 1 ; i < n-1 ; i++){
            int sum =( nums[i-1] + nums[i+1] );
            if(nums[i]*2 >= sum) cnt++;
        }
        return cnt;
    }
};