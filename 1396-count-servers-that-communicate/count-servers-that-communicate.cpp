class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int> r(n+1 , 0) , c(m+1 , 0);

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){

                if(grid[i][j] == 1){
                    r[i]++;
                    c[j]++;
                }
            }
        }


        int cnt=0;
        for(int i = 0 ;i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if (grid[i][j] == 1 && (r[i] > 1 || c[j] > 1))
                    cnt++;
            }
        }

    return cnt;

    }
};