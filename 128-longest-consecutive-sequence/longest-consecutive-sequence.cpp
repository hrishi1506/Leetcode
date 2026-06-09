class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        sort(nums.begin(),nums.end());


        int c = 1 ;
        int maxi = INT_MIN;
        int last = nums[0];
        

        for(int i = 1 ; i < n ; i++){
            if(nums[i] == last) {
                continue;
            }

            if(nums[i] - 1 == last){
                c++;
            }
            else{
                maxi = max(maxi,c);
                c = 1;
               
            }
            last = nums[i];
        }

        maxi = max(maxi,c);
        return maxi;

    }
};