class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int hor = abs(sy-fy);
        int ver = abs(sx-fx);

        if(hor == 0 && ver == 0 && t == 1) return false;

        int mini = max(hor, ver);

        if(t < mini) return false;

        return true;
    }
};
