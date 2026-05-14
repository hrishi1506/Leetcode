class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(),nums.end());
        int val = nums[n-1];

        if(val+1 != n) return false;

        unordered_map<int,int> mapp;

        for(int x : nums){
            mapp[x]++;
        }

        for(auto &it : mapp){
            if(it.first != val && it.second != 1) return false;

            if(mapp[val] > 2) return false;
        }

        return true;
    }
};