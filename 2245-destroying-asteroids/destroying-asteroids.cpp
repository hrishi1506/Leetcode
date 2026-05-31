class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& vec) {
        int n = vec.size();
        sort(vec.begin(),vec.end());
        long long s = mass;

        for(int x : vec){
            if(s < x) return false;

            s+=x;
        }
        return true;
    }
};