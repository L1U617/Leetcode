# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        ret = ans = ListNode(0)
        p = l1
        q = l2
        c = 0
        while p or q:
            x = p.val if p else 0
            y = q.val if q else 0
            s = (x + y + c) % 10
            tmp = ListNode(s)
            ans.next = tmp
            ans = ans.next
            c = (x + y + c) / 10
            if p: p = p.next
            if q: q = q.next
        if c:
            tmp = ListNode(c)
            ans.next = tmp
        return ret.next
