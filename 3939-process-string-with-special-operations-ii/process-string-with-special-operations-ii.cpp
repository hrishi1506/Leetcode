class Solution {
    using ll = long long;
public:
    char processStr(string s, long long k) {
        ll len = 0;

        //step 1
        for(char c : s){
            if(c == '*'){
                len = max(0LL , len-1);   //only decreare the len if string existss..
            }
            else if(c == '#'){
                len *= 2;
            }
            else if(c != '%'){         //in '%' case we dont have to do anything we are counting if it is a letter
                 len++;
            }
        }

        if(k >= len) return '.';      //if the expected len is greater than k it is invalidd...


        // in step 2 go back and find from where the fucking letter came from

        for(int i = s.size()-1 ; i >= 0 ; i--){
            char c = s[i];

            if(c == '*'){
                len++;         //we are traversing back in forward if see * means we would pop an element so in backward we are subracting
            }

            else if(c == '#'){
                ll half = len / 2;

                if(k >= half){
                    k -= half ;   
                }                        //in forward if we see # len of string would be multiplied so we are dividing in backward

                len = half;           
            }

            else if(c == '%'){
                k = len - 1 - k;
            }

            else{
                if( k == len-1){
                    return c;
                }
                len--;
            }
        }

        return '.';
    }
};