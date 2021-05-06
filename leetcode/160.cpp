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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL or headB == NULL) return NULL;

        ListNode* p1 = headA;
        ListNode* p2 = headB;
        bool flag = false;
        while (p1 != p2)
        {
            if (p1->next == NULL)
            {
                if (flag) {return NULL;}
                p1 = headB;
                flag = true;
            }
            else p1 = p1->next;
            if (p2->next == NULL)
            {
                p2 = headA;
            }
            else p2 = p2->next;
        }
        return p1;
    }
};
