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
        ListNode *ret, *m, *p, *q, *tmp;
        ret = m = new ListNode(0);
        p = l1; q = l2;
        while(p != NULL && q != NULL){
            if(p->val > q->val){
                ret->next = new ListNode(q->val);
                ret = ret->next;
                q = q->next;
            }
            else{ 
                ret->next = new ListNode(p->val);
                ret = ret->next;
                p = p->next;
            } 
        }
        while(p != NULL){
            ret->next = new ListNode(p->val);
            ret = ret->next;
            p = p->next;
        }
        while(q != NULL){
            ret->next = new ListNode(q->val);
            ret = ret->next;
            q = q->next;
        }
        return m->next;
    }
};
