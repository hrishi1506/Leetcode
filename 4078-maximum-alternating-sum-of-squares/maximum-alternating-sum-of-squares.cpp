class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>arr;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            arr.push_back(abs(nums[i]));
        }

        sort(arr.begin(),arr.end());

        int i = 0 , j = n-1;

        long long ans = 0;
        while(i < j){
            ans  += (arr[j]*arr[j]) - (arr[i]*arr[i]);
            i++;j--;
        }

        if(n % 2 != 0){
            int m = n/2 ;
            ans += arr[m]*arr[m];
        }

        return ans;
    }
};