// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         //using stack O(n) EXTRA.. SPACEE..

//         stack<char> st1 , st2;

//         for(char &ch : s){
//             if(st1.size() > 0 && ch == '#'){
//                 st1.pop();
//             }
//             else if(ch != '#'){
//                 st1.push(ch);
//             }
//         }
//         for(char &ch : t){
//             if(st2.size() > 0 && ch == '#'){
//                 st2.pop();
//             }
            
//             else if(ch != '#'){
//                 st2.push(ch);
//             }
//         }
//         return st1==st2;
//     }
// };


class Solution {                         //without extra space;
public:
    bool backspaceCompare(string s, string t) {
        int i = s.size()-1;
        int j = t.size()-1;

        while(i >= 0 || j >= 0){
            int skipS = 0;

            while(i >= 0){
                if(s[i] == '#'){
                    skipS++;
                    i--;
                }
                else if(skipS > 0){
                    i--;
                    skipS--;
                }
                else{
                    break;
                }
            }

            int skipT = 0;
            while(j >= 0){
                if(t[j] == '#'){
                    skipT++;
                    j--;
                }
                else if(skipT > 0){
                   
                    j--;
                    skipT--;
                }
                else {
                    break;
                }
            }

            if(i >= 0 && j >= 0){
                if(s[i] != t[j]){
                    return false;
                }
            }
                else if (i >= 0 || j >= 0) {
                return false;
            }

            
            i--;j--;

        }

        return true;
 }
};
