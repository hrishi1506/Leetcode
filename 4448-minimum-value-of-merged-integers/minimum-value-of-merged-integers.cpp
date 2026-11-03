class Solution {
    int solve(int a , int b){
        string str1 = to_string(a);
        string str2 = to_string(b);

        return stoi(str2+str1);
    }
public:
    int minMergedInteger(vector<int>& nums) {
        int ans = INT_MAX;

        for(int i = 1 ; i < nums.size() ; i+=2){
            int s = solve(nums[i],nums[i-1]);
            ans = min(ans,s);
        }
        return ans;
    }
};