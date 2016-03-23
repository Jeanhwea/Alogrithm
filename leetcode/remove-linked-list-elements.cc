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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * p, * q, * r;
        for (p = 0, r = head, head = 0; r; ) {
            q = r, r = r->next;
            if (q->val != val) {
                if (head) {
                    p->next = q;
                } else {
                    head = q;
                }
                p = q;
                p->next = 0;
            }
        }
        return head;
    }
};
