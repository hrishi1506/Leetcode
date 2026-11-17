class Solution {
public:
    string digitSum(string s, int k) {
        string str = s;

        while(str.size() > k){
            string n = "";

            for(int i = 0 ; i < str.size() ; i+=k){

                int sum = 0;

                for(int j = i ; j < min(i+k , (int)str.size()); j++){
                    sum += str[j] - '0';
                }

                n += to_string(sum);
            }
            str = n;
        }
        return str;
    }
};