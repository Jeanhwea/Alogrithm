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
        ListNode *p, *q;
        for (p = head; p && p->next; p = p->next) {
            for (q = p->next; q && (q->val==p->val); q = p->next) {
                p->next = q->next;
                free(q);
            }
        }
        return head;
    }
};
