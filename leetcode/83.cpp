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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head;
        while (p!=NULL and p->next!=NULL)
        {
            while (p->next!=NULL and p->next->val == p->val)
            {
                p->next=p->next->next;
            }
            p=p->next;
        }
        return head;
    }
};
