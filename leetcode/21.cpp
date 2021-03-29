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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* result=NULL;
        ListNode* p=NULL;
        while (l1!=NULL and l2!=NULL)
        {
            if (result==NULL)
            {
                if (l1->val < l2->val) {result=l1; l1=l1->next;}
                else {result=l2; l2=l2->next;}
                p=result;
            }
            else
            {
                if (l1->val < l2->val) {p->next=l1; l1=l1->next;}
                else {p->next=l2; l2=l2->next;}
                p=p->next;
            }
        }
        if (l1!=NULL) p->next=l1;
        else p->next=l2;
        return result;
    }
};
