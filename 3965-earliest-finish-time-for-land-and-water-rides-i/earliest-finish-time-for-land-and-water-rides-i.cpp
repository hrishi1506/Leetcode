class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        int minTime = INT_MAX;

        for (int i = 0; i < landStartTime.size(); ++i) {
            for (int j = 0; j < waterStartTime.size(); ++j) {
                
                int startLand = landStartTime[i];
                int endLand = startLand + landDuration[i];
                int startWater = max(waterStartTime[j], endLand);
                int endWater = startWater + waterDuration[j];
                minTime = min(minTime, endWater);

                
                int startWater2 = waterStartTime[j];
                int endWater2 = startWater2 + waterDuration[j];
                int startLand2 = max(landStartTime[i], endWater2);
                int endLand2 = startLand2 + landDuration[i];
                minTime = min(minTime, endLand2);
            }
        }

        return minTime;
    }
};