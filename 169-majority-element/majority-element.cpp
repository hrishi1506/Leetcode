class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mapp;
        int n = nums.size();

        for(int x : nums){
            mapp[x]++;
        }

        for(auto &it : mapp){
            if(it.second > n/2){
                return it.first;
            }

        }

        return -1;
    }
};