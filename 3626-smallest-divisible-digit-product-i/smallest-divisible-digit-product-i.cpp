class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n ; i < n+10 ; i ++){
            string str = to_string(i);

            int pro = 1;
            for(char ch : str){
                int d = ch - '0';
                pro *= d;
            }

            if(pro % t == 0){
                return i;
            }
        }
        return -1;
    }
};