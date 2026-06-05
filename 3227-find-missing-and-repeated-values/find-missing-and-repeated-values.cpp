class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int>freq(n*m+1 , 0);

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                freq[grid[i][j]]++;
            }
        }


        vector<int>ans;

        int r = 0 , miss = 0;
        for(int i = 1 ; i < freq.size() ; i++){
            if(freq[i] == 2) r = i;
            if(freq[i] == 0) miss = i;
                
        }

        // ans.push_back(r);
        // ans.push_bax
        return {r,miss};
    }
};