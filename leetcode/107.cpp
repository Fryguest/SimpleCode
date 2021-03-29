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
    int d=0;
    void cal(TreeNode* n, int a)
    {
        if (n==NULL) return;
        d=max(d,a);
        cal(n->left, a+1);
        cal(n->right, a+1);
    }
    int maxDepth(TreeNode* root) {
        cal(root,1);
        return d;
    }

    vector<vector<int>> result;
    void cal2(TreeNode* n, int d)
    {
        if (n==NULL) return;
        result[result.size()-d].emplace_back(n->val);
        cal2(n->left,d+1);
        cal2(n->right,d+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int dep = maxDepth(root);
        result.resize(dep);
        cal2(root,1);
        return result;
    }
};
