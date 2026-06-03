class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int mini = INT_MAX;

        for(int i = 0 ; i < landStartTime.size() ; i++){
            for(int j = 0 ; j < waterStartTime.size() ; j++ ){
                
                int stLand = landStartTime[i];
                int endLand = stLand + landDuration[i];
                int stWater = max(waterStartTime[j] , endLand);
                int waterEnd = stWater + waterDuration[j];
                mini = min(mini , waterEnd);


                int stWater2 = waterStartTime[j];
                int waterEnd2 = stWater2 + waterDuration[j];
                int stLand2 = max(waterEnd2 , landStartTime[i]);
                int endLand2 = stLand2 + landDuration[i];
                mini = min(mini,endLand2);

            }
        }
        return mini;
    }
};