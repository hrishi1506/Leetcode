class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int n = nums.size();
        int minI = -1 ,maxI = -1;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] < mini){
                mini = nums[i];
                minI = i;
            }
            if(nums[i] > maxi){
                maxi = nums[i];
                maxI = i;
            }
        }
        int removF = max(minI , maxI) + 1;
        int removB = n - min(minI , maxI);
        int remBoth = min(minI,maxI)+1 + n-max(minI,maxI);


        return min({removF , removB , remBoth});

       
    }
};