/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;

    int findSum(TreeNode* root, int &count) {
        if(!root) return 0;
        count++;
        
        int left = findSum(root->left, count);
        int right = findSum(root->right, count);

        return left+right+root->val;
    }

    void solve(TreeNode* root) {
        if(!root) return;

        int count = 0;
        int sum = findSum(root, count);

        int div = sum/count;
        if(root->val == div) ans++;

        solve(root->left);
        solve(root->right);
    }

    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return ans;
    }
};
