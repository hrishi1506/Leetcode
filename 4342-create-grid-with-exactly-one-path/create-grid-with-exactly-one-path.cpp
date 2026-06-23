class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<char>> ans(m , vector<char>(n,'#'));

        vector<string>res;
        
        for(int j = 0 ; j < n ; j++){
            ans[0][j] = '.';
        }

        for(int i = 0 ; i < m ; i++){
            ans[i][n-1] = '.';
        }

        for(int i = 0 ; i < ans.size() ; i++){
            string str = "";
            for(int j =0; j < ans[0].size() ; j++){
                str.push_back(ans[i][j]);
            }
            res.push_back(str);
        }

        return res;
    }
};