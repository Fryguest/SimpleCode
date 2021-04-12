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
    bool cal(TreeNode* n, int &d)
    {
        int ld=0, rd=0;
        if (n->left != NULL and !cal(n->left, ld)) return false;
        if (n->right != NULL and !cal(n->right, rd)) return false;
        if (abs(ld-rd)>1) return false;
        d = max(ld, rd)+1;
        return true;
    }
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        int d = 0;
        return cal(root, d);
    }
};
