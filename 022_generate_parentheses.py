class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        l = []
        def appendParenthese(n, s, x, nleft, nright):
            if x == 2 * n:
                l.append(s)
                return
            if nleft < n:
                appendParenthese(n, s + '(', x + 1, nleft + 1, nright)
            if nright < nleft:
                appendParenthese(n, s + ')', x + 1, nleft, nright + 1)

        appendParenthese(n, '', 0, 0, 0)

        return l
