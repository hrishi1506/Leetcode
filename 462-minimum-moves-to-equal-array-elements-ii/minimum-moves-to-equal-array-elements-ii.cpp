class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mid = n/2;

        int midEle = nums[mid];
        int c = 0;

        for(int i = 0 ; i < n ; i++){
            c += abs(midEle - nums[i]);
        }

        return c;
    }
};