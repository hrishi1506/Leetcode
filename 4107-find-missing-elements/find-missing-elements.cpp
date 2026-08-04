class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans ;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i] == 1) continue ;
            int j = nums[i] +1 ;
            while( j != nums[i+1]){
                ans.push_back(j);
                j++;
            }
        }
        return ans;
    }
};