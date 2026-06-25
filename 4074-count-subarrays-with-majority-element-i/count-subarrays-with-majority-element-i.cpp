class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            int c = 0;
            for(int j = i ; j < n ; j++){
                if(nums[j] == target) c++;

            int l = j-i+1;
            if(c > l/2){
                ans++;
            }
            }

            
        }
        return ans;
    }
};