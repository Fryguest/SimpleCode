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
    int cal(TreeNode* root)
    {
        if (root == NULL) return 0;
        int l = cal(root->left);
        int r = cal(root->right);
        int temp=0;
        bool hasL = root->left != NULL and root->left->val == root->val;
        bool hasR = root->right != NULL and root->right->val == root->val;
        if (hasL and hasR) 
        {
            ans = max(ans, l + r + 2);
            temp = max(l+1, r+1);
            return temp;
        }
        if (hasL)
        {
            ans = max(ans, l + 1);
            temp = max(temp,l+1);
        }
        if (hasR)
        {
            ans = max(ans, r + 1);
            temp = max(temp,r+1);
        }
        return temp;
    }

    int longestUnivaluePath(TreeNode* root) {
        ans=0;
        cal(root);
        return ans;
    }
};
