class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        // nearest points 
        int xi , yi;

        // x nearest point
        if(x1 > xCenter)
            xi = x1;
        else if(x2 < xCenter)
            xi = x2;
        else
            xi = xCenter;


        // yth nearest point 
        if(y1 > yCenter)
            yi = y1;
        else if(y2 < yCenter)
            yi = y2;
        else
            yi = yCenter;

    
        // find the fucking distance between circle centre and the common point
        
        int d = sqrt((xi - xCenter) * (xi - xCenter) + (yi - yCenter)*(yi - yCenter));

        // now if the distance is less than the circle radiun then ofcc its overlapping piece of shit

        return  d <= radius;

    }
};