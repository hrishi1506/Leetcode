class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele ;
        int c1 = 0;
        
        int n = nums.size();

        for(int i =0; i  < n ;i++){
            if(c1 == 0){
                ele = nums[i];
                c1++;
            }
            else if(ele == nums[i]){
                c1++;
            }
            else{
                c1--;
            }
        }

        int c2 = 0;
        for(int i = 0 ; i < n ;i++){
            if(nums[i] == ele){
                c2++;
            }
        }

        if(c2 > n/2) return ele;

        return -1;
    }
};