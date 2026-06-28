class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long sum = 1;
        sort(nums.begin(),nums.end() , greater<int>());
        int cnt = min(k,mul-1);

        k = k-cnt;
        int i =0;

        while(cnt--){
            sum += (1LL* nums[i]*mul);
                mul--;
                i++;
        }

        while(k > 0){
            sum += nums[i];
            i++;
            k--;
        }

        return sum-1;


    }
};