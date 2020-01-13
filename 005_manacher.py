class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        n = len(s)
        T = "*#"
        for c in s:
            T += c + '#'
        T += "$"
        n = 2 * n + 3
        additionalMark = {'#', '$', '*'}
        P = [0 for _ in range(n)]

        C = R = 1
        for i in range(2, n - 2):
            mirror = C * 2 - i
            if i < R:
                P[i] = min(R - i, P[mirror])
            else:
                P[i] = 0;
            while T[i - P[i] - 1] == T[i + P[i] + 1]:
                P[i] += 1
            if i + P[i] >= R:
                C = i
                R = i + P[i]
        m, index =0, 0 
        for i in range(n):            
            if m < P[i]:
                m, index = P[i], i
        
        start = (index - P[index]) / 2
        return s[start: start + P[index]]
