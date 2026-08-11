class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> seen(nums.begin(),nums.end());
        int sum = nums[0];

        for(int i=1 ; i < n ; i++){
            if(nums[i-1]+1 != nums[i]) break;

            else sum += nums[i];
        }

        while(seen.count(sum)){
            sum++;
        }

        return sum;
    }
};