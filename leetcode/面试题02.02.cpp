/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int kthToLast(ListNode* head, int k) {
        ListNode* p = head;
        while (k--) p = p->next;
        ListNode* res = head;
        while (p!=NULL)
        {
            p=p->next;
            res=res->next;
        }
        return res->val;
    }
};
