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
        ListNode *p, *q, *ret, *r, *tmp;
        int carry = 0, sum;
        r = ret = new ListNode(0);
        p = l1; q = l2;
        while(p != NULL && q != NULL){
            sum = p->val + q->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            r->next = new ListNode(sum);
            r = r->next;
            p = p->next;
            q = q->next;
        }
        while(p != NULL){
            sum = p->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            r->next = new ListNode(sum);
            r = r->next;
            p = p->next;
        }
        while(q != NULL){
            sum = q->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            r->next = new ListNode(sum);
            r = r->next;
            q = q->next;
        }        
        if(carry) r->next = new ListNode(carry);
        r = ret->next;
        return r;
    }
};
