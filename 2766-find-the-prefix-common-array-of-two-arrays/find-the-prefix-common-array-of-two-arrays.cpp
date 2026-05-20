class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int> s1,s2;
        vector<int>ans;
        int n = A.size();
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(s1.count(B[i])) cnt++;
            if(s2.count(A[i])) cnt++;

            if(A[i] == B[i]) cnt++;

            s1.insert(A[i]);
            s2.insert(B[i]);

            ans.push_back(cnt);
        }


        return ans;


    }
};