class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int>days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        auto day = [&](const string& s){
            int m = (s[0] - '0') * 10 + (s[1] - '0');
            int d = (s[3] - '0') * 10 + (s[4] - '0');

            int res = d;

            for(int i = 0 ; i < m-1 ; i++){
                res += days[i];
            }
            return res;
        };

        int aSt = day(arriveAlice) , aEnd = day(leaveAlice);
        int bSt = day(arriveBob) , bEnd = day(leaveBob);

        int st = max(aSt,bSt);
        int end = min(aEnd , bEnd);


        return st > end ? 0 : end-st+1;

    }
};