class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int c = 0;

        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i] == nums[i+1])
                c++;
        }
        return c;
    }
};