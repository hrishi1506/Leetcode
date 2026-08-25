class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        for(int x : nums){
            if(x % k == 0){
                mapp[x]++;
            }
        }

        for(int i = 1 ; i <= 101; i++){
            int s = k * i;
            if(mapp[s] == 0)
                return s;
        }
        return -1;
    }
};