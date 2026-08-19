class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        int n = nums.size();

        if(k==n) return *max_element(nums.begin(),nums.end());

        for(int i = 0 ; i <= n-k ; i++){
            for(int j = i ; j < i+k ; j++){
                mapp[nums[j]]++;
            }
        }
        int maxi = -1;
        for(auto &it : mapp){
            if(it.second == 1){
                maxi = max(maxi , it.first);
            }
        }
        return maxi;
    }
};