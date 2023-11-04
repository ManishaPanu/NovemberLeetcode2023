class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int res = INT_MIN;

        for(auto &x : left) {
            res = max(res, x);
        }

        for(auto &x : right) {
            res = max(res, n-x);
        }

        return res;
    }
};
