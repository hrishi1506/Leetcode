class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int c = 0;
        int i = 0 , j = 0;
        int n = s.size();
        string ans = "";

        string str= "";
        while(j < n){
            if(s[j] == '1')
                c++;

            while(c > k){
                if(s[i] == '1')
                    c--;
                i++;
            }

            while(c == k && s[i] == '0'){
                i++;
            }

            if(c == k){
                string curr = s.substr(i , j-i+1);

                if(ans.size() == 0)
                    ans = curr;
                else if(ans.size() > curr.size())
                    ans = curr;
                else if(ans.size() == curr.size() && ans > curr)
                    ans = curr;
            }
            j++;
        }


        return ans;

    }
};