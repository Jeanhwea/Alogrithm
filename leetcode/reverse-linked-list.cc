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
    ListNode* reverseList(ListNode* head) {
        ListNode * p, * q;
        for (q = head, head = 0; q; ) {
            p = q;
            q = q->next;
            p->next = head;
            head = p;
        }
        return head;
    }
};
