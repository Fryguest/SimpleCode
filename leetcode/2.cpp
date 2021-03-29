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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a=0,b=0;
        ListNode* result=new ListNode(0);
        ListNode* p = result;
        int x=0;
        while (l1!=NULL or l2 != NULL or x != 0)
        {
            if (p->next!=NULL) p = p->next;
            if(l1!=NULL) a=l1->val;
            else a=0;
            if(l2!=NULL) b=l2->val;
            else b=0;
            p->val=(a+b+x)%10;
            x=(a+b+x)/10;
            if (l1!=NULL) l1=l1->next;
            if (l2!=NULL) l2=l2->next;
            p->next=new ListNode(0);
        }
        delete(p->next);
        p->next=NULL;
        return result;
    }
};
