class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>prev;
        vector<int>next;

        int c = 0;

        for(int i=0 ; i < nums.size() ; i++){
            if(nums[i] < pivot) prev.push_back(nums[i]);
            else if(nums[i] > pivot) next.push_back(nums[i]);
            else c++;
        }


        vector<int>ans;
        for(int i = 0 ; i < prev.size() ; i++){
            ans.push_back(prev[i]);
        }
        while(c--){
            ans.push_back(pivot);
        }
        for(int  i = 0 ; i < next.size() ; i++){
            ans.push_back(next[i]);
        }
        return ans;
    }
};