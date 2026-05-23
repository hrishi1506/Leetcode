class Solution {
public:
    string sortSentence(string s) {
         vector<string> vec(10);

         string temp = "";

         for(char ch : s){
            if(isdigit(ch)){
                int idx = ch - '0';
                vec[idx-1] = temp;
            }
            else if(ch == ' '){
                temp = "";
            }
            else {
                temp += ch;
            }
         }

        string ans = "";
        for(int i = 0 ; i < vec.size() ; i++){
            if(vec[i] != ""){
                if(!ans.empty()){
                    ans += " ";
                }
            }
            ans += vec[i];
        }

        return ans;

    }
};