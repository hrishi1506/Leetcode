class Solution {
public:
    string capitalizeTitle(string s) {
        vector<string> vec;

        string str = "";
        for(char ch : s){
            if(ch != ' '){
                str += ch;
            }
            else{
                vec.push_back(str);
                str = "";
            }
        }
        vec.push_back(str);

        string ans = "";

        for(int i = 0 ; i < vec.size() ; i++){
            int k = vec[i].size();

            if(k <= 2){
                for(int j = 0 ; j < k ; j++){
                    ans += tolower(vec[i][j]);
                }
            }

            else{
                ans += toupper(vec[i][0]);
                for(int j = 1 ; j < k ; j++){
                    ans += tolower(vec[i][j]);
                }
            }

            if(i != vec.size() -1){
            ans += " ";
            }
        }

        return ans;
    }
};