class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        int maxi = *max_element(arr.begin(), arr.end());
        if(k >= n) return maxi;

        int ans = arr[0];
        int streak = 0;

        for(int i=1; i<n; i++) {
            if(arr[i] > ans) {
                ans = arr[i];
                streak = 1;
            }
            else {
                streak++;
            }
            if(ans == maxi || streak == k) return ans;
        }

        return ans;
    }
};
