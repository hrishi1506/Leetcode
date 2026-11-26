class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int a = 0;
        int b = 0;

        vector<string>ans;

        for(int i = 0 ; i < rain.size()-1 ; i++){

            if(rain[i] == 1  && rain[i+1] == 1 && a == b) {
                ans.push_back("Alice");
                a++;
            }

            else if(rain[i] == 1 && rain[i+1] != 1){
                ans.push_back("Bob");
                b++;
                }
            
            else if(rain[i] == 0)
                ans.push_back("None");
            
            else {
                if(a < b){ 
                    ans.push_back("Alice");a++;
}
                else {
                    ans.push_back("Bob");b++;}
            }
        }

        if(rain[rain.size() -1] == 1) 
            ans.push_back("Bob");
        else 
            ans.push_back("None");
        return ans;
    }
};