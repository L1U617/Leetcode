class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if s == "":
            return True
        if s[0] == '}' or s[0] == ']' or s[0] == ')':
            return False
        d = {')': '(', ']': '[', '}': '{'}
        stack = collections.deque()
        stack.append(s[0])
        for i in range(1, len(s)):
            if s[i] == ')' or s[i] == '}' or s[i] == ']':
                if len(stack) == 0:
                    return False
                else:
                    c = stack.pop()
                    if d[s[i]] != c:
                        return False
            else:
                stack.append(s[i])
        if len(stack) == 0:
            return True
        else:
            return False

            
