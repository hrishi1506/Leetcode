class Solution {
public:
    bool backspaceCompare(string s, string t) {
        //using stack O(n) EXTRA.. SPACEE..

        stack<char> st1 , st2;

        for(char &ch : s){
            if(st1.size() > 0 && ch == '#'){
                st1.pop();
            }
            else if(ch != '#'){
                st1.push(ch);
            }
        }
        for(char &ch : t){
            if(st2.size() > 0 && ch == '#'){
                st2.pop();
            }
            
            else if(ch != '#'){
                st2.push(ch);
            }
        }
        return st1==st2;
    }
};

