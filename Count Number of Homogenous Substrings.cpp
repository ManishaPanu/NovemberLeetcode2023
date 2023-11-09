class Solution {
public:
    int countHomogenous(string s) {
        int res = 0, count = 0, mod = 1e9 + 7;
        char prev = '\0';
        for (char ch: s) {
            count = ch== prev ? count + 1 : 1;
            prev = ch;
            res = (res + count) % mod;
        }
        return res;
    }
};
