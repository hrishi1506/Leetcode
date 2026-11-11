class Solution {
    long long solve(long long k , long long c1 , long long c2 , long long cb , long long n1 , long long n2){
        return k*cb + max(0LL,n1-k) * c1 + max(0LL,n2-k) * c2;
    }
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans = LLONG_MAX;

        vector<long long> ks = {0 , need1 , need2 , min(need1 , need2)};

            for(long long k : ks){
            ans = min(ans , solve(k , cost1 , cost2 , costBoth , need1 , need2));
            }

        return ans;
    }
};