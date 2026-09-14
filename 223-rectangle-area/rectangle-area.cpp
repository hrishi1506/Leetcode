class Solution {
    bool overLap(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){
        return ax1 < bx2 && 
                ay1 < by2 &&
                ax2 > bx1 &&
                ay2 > by1;
    }
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int l1 = ax2 - ax1;
        int b1 = ay2 - ay1;

        int l2 = bx2 - bx1;
        int b2 = by2 - by1;

        int area1 = l1*b1;
        int area2 = l2*b2;

        int extra = 0;
        if(overLap(ax1,ay1,ax2,ay2,bx1,by1,bx2,by2)){
            int ovl = min(ax2, bx2) - max(ax1, bx1);
            int ovb = min(ay2, by2) - max(ay1, by1);

            extra = ovl * ovb;

        }

        return area1 + area2 - extra;
    }
};