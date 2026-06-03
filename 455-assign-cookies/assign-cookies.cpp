class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int l = 0 , r = 0;
        int n = g.size() , m = s.size();
        int c = 0;
        sort(g.begin(),g.end()) ; sort(s.begin(),s.end());

        while(l < n && r < m){
            if(g[l] <= s[r]){
                c++;l++;r++;
            }
            else{
                r++;
            }
        }
        return c;
    }
};