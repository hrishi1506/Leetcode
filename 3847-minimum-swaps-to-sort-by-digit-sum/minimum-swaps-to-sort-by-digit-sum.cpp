class Solution {
    int solve(int a) {
        int c = 0;

        while (a != 0) {
            int d = a % 10;
            c += d;
             a /= 10;
        }

        return c;
    }

public:
    int minSwaps(vector<int>& nums) {
        vector<pair<int,int>>vec;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            vec.push_back({nums[i] , i});
        }

        auto lambda = [&](auto a , auto b){
            int x = solve(a.first);
            int y = solve(b.first);

            if(x != y) return x < y;

            return a.first < b.first;
        };

        sort(vec.begin(),vec.end(),lambda);

        vector<bool> vis(n,false);
        int cnt = 0;

        for(int i = 0 ; i < n ; i++){
            if(vis[i] || vec[i].second == i)
                continue;

            int cyc = 0;
            int j = i;

            while(!vis[j]){
                vis[j] = true;
                j = vec[j].second;
                cyc++;
            }

            cnt += cyc-1;
        }

        return cnt;
    }
};