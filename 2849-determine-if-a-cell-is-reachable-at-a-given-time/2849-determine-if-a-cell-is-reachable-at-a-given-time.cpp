class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int y=abs(fy-sy);
        int x=abs(fx-sx);
        int g=max(x,y);
        if((g==0 && (t<2 and t>0)) || (g>t))
            return false;
        else
            return true;
    }
};