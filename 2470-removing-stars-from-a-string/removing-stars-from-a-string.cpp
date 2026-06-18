// class Solution {
// public:
//     string removeStars(string s) {
//         stack<char>st;
//         for(char &ch : s){
//             if(st.size() > 0 && ch == '*') st.pop();

//             else st.push(ch);
//         }

//         string res = "";
//         while(!st.empty()){
//             res += st.top();
//             st.pop();
//         }
//         reverse(res.begin(),res.end());
//         return res;
//     }
// };


class Solution {
public:
    string removeStars(string s) {

        int cnt = 0;
        string res = "";
       
        for(int i = s.size()-1 ; i >= 0 ; i--){
            if(s[i] == '*') {
                cnt++;
            }
            else if(cnt > 0){
                cnt--;
            }
            else{
                res += s[i];
            }
        }

        reverse(res.begin(),res.end());

        return res;


  } 
};