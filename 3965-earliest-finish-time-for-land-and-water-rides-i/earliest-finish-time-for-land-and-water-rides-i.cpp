class Solution {
    int solve(vector<int>&st1 , vector<int>&end1 , vector<int>&st2 , vector<int>&end2){
        int finish1 = INT_MAX;
        for(int i = 0 ; i < st1.size() ; i++){
            finish1 = min(finish1 , st1[i] + end1[i]);
        }

        int finish2 = INT_MAX;
        for(int j = 0 ; j < st2.size() ; j++){
            finish2 = min(finish2 , max(finish1 , st2[j]) + end2[j]);
        }

        return finish2;
    }
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int landFirstSt = solve(landStartTime,landDuration,waterStartTime,waterDuration);

        int waterStfirst = solve(waterStartTime,waterDuration,landStartTime,landDuration);

        return  min(landFirstSt,waterStfirst);
    }
};