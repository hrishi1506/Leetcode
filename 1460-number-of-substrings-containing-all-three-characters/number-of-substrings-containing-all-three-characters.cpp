class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int cnt = 0;

        vector<int>mapp (3,0) ;
        int j = 0 , i = 0;


        while(j < n){
            mapp[s[j] - 'a']++;

            while(mapp[0] >0 && mapp[1] > 0 && mapp[2] > 0){
                cnt += n-j;

                mapp[s[i] - 'a']--;
                i++;
            }

            j++;
        }

        return cnt;
    }
};