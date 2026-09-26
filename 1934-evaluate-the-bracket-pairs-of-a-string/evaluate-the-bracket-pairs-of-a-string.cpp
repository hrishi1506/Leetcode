class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mapp;
        for(int i = 0 ; i < knowledge.size() ; i++){
            mapp[knowledge[i][0]] = knowledge[i][1];
        }

        string ans = "";

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){

                string str = "";

                i++;
                while(s[i] != ')'){
                    str.push_back(s[i++]);
                }

                if(mapp.find(str) != mapp.end()){
                    ans += mapp[str];
                }
                else{
                    ans += "?";
                }

            }
            else
               ans += s[i];
        }
        return ans;
    }
};