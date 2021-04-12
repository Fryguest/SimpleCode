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
    struct P
    {
        int num;
        bool f;
        int minn, maxn;
        P(int _num, bool _f, int _minn, int _maxn)
        {
            num=_num;
            f=_f;
            minn=_minn;
            maxn=_maxn;
        }
    };
    P cal(TreeNode* t)
    {
        if (t->left==NULL and t->right==NULL)
        {
            ans = max(ans, t->val);
            return P(t->val, true, t->val, t->val);
        }
        if (t->right==NULL)
        {
            P l = cal(t->left);
            if (!l.f or l.maxn >= t->val) return P(0, false, 0, 0);
            ans = max(ans, t->val + l.num);
            return P(t->val + l.num, true, l.minn, t->val);
        }
        else if (t->left==NULL)
        {
            P r = cal(t->right);
            if (!r.f or r.minn <= t->val) return P(0, false, 0, 0);
            ans = max(ans, t->val + r.num);
            return P(t->val + r.num, true, t->val, r.maxn);
        }
        else
        {
            P l = cal(t->left);
            P r = cal(t->right);
            if (!l.f or !r.f or l.maxn >= t->val or r.minn <= t->val) return P(0, false, 0, 0);
            ans = max(ans, t->val + l.num + r.num);
            return P(t->val + l.num + r.num, true, l.minn, r.maxn);
        }

    }

    int maxSumBST(TreeNode* root) {
        ans = 0;
        cal(root);
        return ans;
    }
};
