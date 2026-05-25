class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string> vec;
        string str = "";

        for(int i = n - 1; i >= 0; i--) {

            if(s[i] != ' '){
                str.push_back(s[i]);
            }
            else {
                if(!str.empty()){
                    reverse(str.begin(), str.end());
                    vec.push_back(str);
                    str = "";
                }
            }
        }
        if(!str.empty()){
            reverse(str.begin(), str.end());
            vec.push_back(str);
        }

        string ans = "";

        for(int i = 0; i < vec.size(); i++) {
            ans += vec[i];

            if(i != vec.size() - 1)
                ans += " ";
                
        }

        return ans;
    }
};