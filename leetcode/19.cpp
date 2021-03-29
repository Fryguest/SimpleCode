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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //没做delete 会有内存泄露
        ListNode* p = new ListNode();
        p->next = head;

        ListNode* p1=p;
        ListNode* p2=p;
        while (n--) p2=p2->next;
        while (p2->next!=NULL)
        {
            p1=p1->next;
            p2=p2->next;
        }
        p1->next=p1->next->next;

        return p->next;
    }
};
