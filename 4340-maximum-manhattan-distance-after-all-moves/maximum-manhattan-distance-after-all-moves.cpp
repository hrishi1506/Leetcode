class Solution {
public:
    int maxDistance(string moves) {
        int d=0 , u=0 , l=0 , r=0 , s=0;

        for(int i =0 ; i < moves.size() ; i++){
            if(moves[i] == 'L') l++;
            else if(moves[i] == 'D') d++;
            else if(moves[i] == 'U') u++;
            else if(moves[i] == 'R') r++;
            else{
                s++;
            }
        }

        return abs(l-r)+abs(u-d)+s;
    }
};