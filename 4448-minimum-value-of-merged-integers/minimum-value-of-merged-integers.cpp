class Solution {
public:
     int solve(int n){
        int ans=1;
        while(n>0){
            ans*=10;
            n=n/10;
        }
        return ans;
     }
    int minMergedInteger(vector<int>& nums) {
         int ans=1e9;
        int n=nums.size();
        for(int i=0; i<n; i+=2){
            int val=nums[i]*solve(nums[i+1])+nums[i+1];
            
            ans=min(ans,val);
        }
        
        return ans;
    }
};