class Solution {
    int solve(vector<int>&st1 , vector<int>&end1 , vector<int>&st2 , vector<int>&end2){
        int endTime1 = INT_MAX;

        for(int i = 0 ; i < st1.size() ; i++){
         endTime1 = min (endTime1 , st1[i]+end1[i]);
        }

        int endTime2 = INT_MAX;

        for(int i = 0 ; i < st2.size() ; i++){
            endTime2 = min(endTime2 , max (endTime1 , st2[i]) + end2[i]);
        }

        return endTime2;
    }
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        

        int landFirst  = solve(landStartTime,landDuration,waterStartTime,waterDuration);

        int waterFirst = solve(waterStartTime,waterDuration,landStartTime,landDuration);

        return min(landFirst,waterFirst);

    }
};

// figure out the least time takes to complete a ride either land or water , and from that least time
// calculate the best or minium possible for the next ride