class Solution {
public:
    int minMoves(vector<int>& nums) {
       int n = nums.size();
       int maxEle = *max_element(nums.begin(),nums.end());

       int c = 0;
       for(int i = 0 ; i < n ; i++){
        c += maxEle - nums[i];
       }

return c;
      
    }
};