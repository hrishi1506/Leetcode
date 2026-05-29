class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;

        for(int i = 0 ; i < nums.size() ; i++){
            string s = to_string(nums[i]);
            int sum = 0;
            for(int j = 0 ; j < s.size() ; j++){
                sum += s[j] - '0';
            }
            mini = min(mini,sum);
        }
        return mini;
    }
};