class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
       
        for(int i = 0 ; i < n ; i++){
            unordered_map<int,int>mapp;
            for(int j = i ; j < n; j++){
                mapp[nums[j]]++;

                int d = mapp.size();
                c += d*d;
            }
        }

        return c;
    }
};