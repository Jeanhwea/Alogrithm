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
        ListNode *head = NULL;
        int carry = 0;
        ListNode *prev = head;
        for (ListNode *pa=l1, *pb=l2; NULL!=pa || NULL!=pb; pa=(NULL==pa)?NULL:pa->next, pb=(NULL==pb)?NULL:pb->next) {
            int va, vb, val;
            va    = (NULL==pa)?0:pa->val;
            vb    = (NULL==pb)?0:pb->val;
            val   = (va+vb+carry)%10;
            carry = (va+vb+carry)/10;
            
            // tail insertion
            if (NULL==head) {
                head = prev = new ListNode(val);
            } else {
                prev->next = new ListNode(val);
                prev = prev->next;
            }
        }
        
        if (carry > 0)
            prev->next = new ListNode(carry);
        
        return head;
    }
};
