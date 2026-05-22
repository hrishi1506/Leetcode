class Solution {
    bool notOp(string s){
        if(s != "+" && s != "-" && s != "*" && s != "/") return true;
        return false;
    }
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int>st;

        for(int i = 0 ; i < n ; i++){
            if(notOp(tokens[i])){
                st.push(stoi(tokens[i]));
            }

            else{
                int n1 = st.top();
                st.pop();

                int n2 = st.top();
                st.pop();

                if(tokens[i] == "+"){
                    st.push(n1+n2);
                }
                else if(tokens[i] == "-"){
                    st.push(n2-n1);
                }
                else if(tokens[i] == "*"){
                    st.push(n1*n2);
                }
                else if(tokens[i] == "/"){
                    st.push(n2/n1);
                }
            }
        }

        return st.top();
    }
};