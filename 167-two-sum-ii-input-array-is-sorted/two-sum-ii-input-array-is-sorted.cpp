class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
       int n = arr.size();
       int i = 0;
       int j = n-1;

       while(i < j){
        int s = arr[i] + arr[j];

        if(s == tar){
            return {i+1,j+1};
        }
        else if(s > tar){
            j--;
        }
        else{
            i++;
        }
       }
       return {-1,-1};
    }
};