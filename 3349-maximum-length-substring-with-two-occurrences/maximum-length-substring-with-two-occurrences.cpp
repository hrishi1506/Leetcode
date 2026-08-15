class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mapp;
        int maxi = 0;
        int j = 0;

        for(int i= 0 ; i < s.size() ; i++){
            mapp[s[i]]++;

            while(mapp[s[i]] > 2){
                mapp[s[j]]--;
                j++;
            } 

            maxi = max(maxi , i-j+1);

        }

        return maxi;
    }
};