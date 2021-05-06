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
    int ans;
    void dfs(TreeNode* r, int x)
    {
        x += r->val;
        if (r->left == NULL and r->right == NULL) ans += x;
        if (r->left != NULL) dfs(r->left, 2 * x);
        if (r->right != NULL) dfs(r->right, 2 * x);
    }
    int sumRootToLeaf(TreeNode* root) {
        ans = 0;
        dfs(root, 0);
        return ans;
    }
};
