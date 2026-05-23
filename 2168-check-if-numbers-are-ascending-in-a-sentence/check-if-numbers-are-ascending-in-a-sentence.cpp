class Solution {
public:
    bool areNumbersAscending(string s) {
        int lastDig = 0;
        string temp = "";

        for(char ch : s){

            if(isdigit(ch)){
                temp += ch;
            }
            else {
                if(!temp.empty()){
                   int val = stoi(temp);
                   temp = "";

                   if(val <= lastDig) return false;

                   lastDig = val;
                }
            }
        }
        if(!temp.empty()){
            int val = stoi(temp);

            if(val <= lastDig) return false;
        }
        return true;
    }
};