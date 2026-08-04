class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());

        set<int>st(nums.begin(),nums.end());

        for(int i = mini+1 ; i < maxi ; i++){
            if(st.count(i) == 0){
                ans.push_back(i);
            }
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};