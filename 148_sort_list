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
    ListNode* Merge(ListNode *firstHalf, int firstNum, ListNode *latterHalf, int latterNum){
        ListNode *m, *ret, *p, *q;
        ret = m = new ListNode(0);
        p = firstHalf; q = latterHalf;
        while(p != NULL && q != NULL && firstNum != 0 && latterNum != 0){
            if(p->val > q->val){
                m->next = new ListNode(q->val);
                m = m->next;
                q = q->next;
                latterNum--;
            }
            else{
                m->next = new ListNode(p->val);
                m = m->next;
                p = p->next;
                firstNum--;
            }   
        }
        while(p != NULL && firstNum != 0){
            m->next = new ListNode(p->val);
            m = m->next;
            p = p->next;
            firstNum--;
        }
        while(q != NULL && latterNum != 0){
            m->next = new ListNode(q->val);
            m = m->next;
            q = q->next;
            latterNum--;
        }
        return ret->next;
    }
    ListNode* MergeSort(ListNode *head, int n){
        if(n == 0 || n == 1) return head;
        int first, second, cnt;
        ListNode *p = head;
        first = n / 2;
        second = n - first;
        for(cnt = first; cnt > 0; cnt--)
            p = p->next;
        head = MergeSort(head, first);
        p = MergeSort(p, second);
        head = Merge(head, first, p, second);
        return head;
    }
    ListNode* sortList(ListNode* head) {
        int i = 0;
        ListNode *p = head;
        while(p != NULL){
            i++;
            p = p->next;
        }
        head = MergeSort(head, i);
        return head;
    }
};
