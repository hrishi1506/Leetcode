class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        for(int &x : nums)
            x = abs(x);
        

        sort(nums.begin(),nums.end());

        int i = 0 , j = n-1;

        long long ans = 0;
        while(i < j){
            ans  += (nums[j]*nums[j]) - (nums[i]*nums[i]);
            i++;j--;
        }

        if(n % 2 != 0){
            int m = n/2 ;
            ans += nums[m]*nums[m];
        }

        return ans;
    }
};