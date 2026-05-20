class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        set<int>st;
        int n = nums.size();

        for(int x : nums){
            st.insert(x);
        }

        for(int i = 1 ; i <= n ; i++){
            if(st.find(i) == st.end()){
                ans.push_back(i);
            } 
        }

        return ans;
    }
};