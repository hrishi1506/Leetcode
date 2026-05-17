class Solution {
    void solve(vector<vector<int>>&ans , vector<int>ip , vector<int>op){
        if(ip.size() == 0){
            ans.push_back(op);
            return;
        }

        vector<int>op1 = op;
        vector<int>op2 = op;

        op1.push_back(ip[0]);
        ip.erase(ip.begin());

        solve(ans,ip,op1);
        solve(ans,ip,op2);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;

        vector<int>op;
        solve(ans , nums , op);

        sort(ans.begin() , ans.end());

        return ans;
    }
};