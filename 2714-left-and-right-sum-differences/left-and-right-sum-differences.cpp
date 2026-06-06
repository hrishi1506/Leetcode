class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int ls = 0;
        int rs = accumulate(nums.begin(),nums.end() , 0);
        vector<int>ans;

        for(int i = 0 ; i < nums.size() ; i++){
            ls += nums[i];
            int s = abs(ls-rs);
            rs -= nums[i];
            ans.push_back(s);
        }
        return ans;
    }
};