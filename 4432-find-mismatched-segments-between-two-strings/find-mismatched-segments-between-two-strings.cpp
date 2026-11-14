class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int n = s1.size();

        int i = 0 , j = 0;

        vector<vector<string>> ans;

        while(i <= n){
            string  str1 = "";
            string str2 = "";

            if(s1[i] != s2[i]){
                while(s1[i] != s2[i]){
                    str1.push_back(s1[i]);
                    str2.push_back(s2[i]);
                    i++;
                }

                ans.push_back({str1 , str2});
            }
            else {
                i++;
            }
        }

        return ans;
    }
};