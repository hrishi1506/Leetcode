class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());

        unordered_map<int,int>mapp;

        for(int i = mini ; i <= maxi ; i++){
            mapp[i]++;
        }   
        for(int x : nums){
            mapp[x]++;
        }

        for(auto &it : mapp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};