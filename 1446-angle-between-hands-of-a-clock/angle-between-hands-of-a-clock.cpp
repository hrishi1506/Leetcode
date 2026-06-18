class Solution {
public:
    double angleClock(int hour, int minutes) {

        if(hour == 12) hour = 0;

        double hrAngle = 30.0 * hour  + 0.5 * minutes;
        double minAngle = 6.0 * minutes;

        double angle = abs(hrAngle - minAngle);

        return angle < 180.0 ? angle :   360 - angle;

    }
};

//1 min hour 0.5 and min 6
/*Convert hours to minutes + additional minutes
Then use the formula for Hour for each scale it moves .
Hints: Hour Angle= 5/60 * (hours_to_minutes +mins) * "each scale it moves per minute"
Minutes angle= mins * "each scale it moves per minute"*/