/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* a, TreeNode* b)
    {
        if (a==NULL and b==NULL) return true;
        if (a!=NULL and b==NULL) return false;
        if (a==NULL and b!=NULL) return false;
        if (a->val!=b->val) return false;
        return check(a->left, b->right) and check(a->right, b->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (root==NULL) return true;
        return check(root->left, root->right);

    }
};
