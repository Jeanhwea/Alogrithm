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
    ListNode* swapPairs(ListNode* head) {
        ListNode *p, *q, *r;
        
        for (q = head, p = 0; q && q->next; q = r) {
            if (p) {
                p->next = q->next;
            } else {
                head = q->next;
            }
            p = q;
            r = q->next->next;
            q->next->next = q;
            q->next = r;
        }
        
        return head;
    }
};
