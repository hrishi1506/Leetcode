class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;

        int n = nums.size();
        for(int i = 0 ; i< n ; i++){

            int sum = 0;

            for(int j =i ; j < n ;j++){
            
                sum += nums[j];
                int size = j-i+1;

                if(size < l)
                    continue;
                
                if(size >= l && size <= r){

                    if(sum > 0)
                        ans = min(ans,sum);
                }

                else{
                    sum = 0;
                }

                
            }
        }
        return ans == INT_MAX ? -1 : ans ;
    }
};