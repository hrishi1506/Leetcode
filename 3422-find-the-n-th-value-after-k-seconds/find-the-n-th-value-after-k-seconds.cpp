class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> pref(n,1);
        long long mod = 1000000007;

        while(k--){
            for(int i = 1 ; i < n ; i++){
                pref[i] = (pref[i] + pref[i-1]) % mod;
            }
        }
        return pref[n-1];
    }
};