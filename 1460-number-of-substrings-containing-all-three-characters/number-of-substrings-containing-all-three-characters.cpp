class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>mapp;

        int cnt=0;

        int j = 0 , i = 0;
        int n = s.size();


        while( j < n){
            mapp[s[j]]++;

            if(mapp.size() == 3){          //agar ithna part valid hoga tho uske baad kuch be valid hogaa!!
              while(mapp.size() == 3)
               { 
                cnt += (n-j); 
                
                mapp[s[i]]--;

                if(mapp[s[i]] == 0){
                    mapp.erase(s[i]);
                }
                i++;
                
                }
            }
            

            j++;

        }

        return cnt;
    }
};