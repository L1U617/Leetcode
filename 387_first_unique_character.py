class Solution:
    def firstUniqChar(self, s: str) -> int:
        n = len(s)
        l = [0 for _ in range(n)]
        d = {}
        for i in range(n):
            if s[i] not in d:
                d[s[i]] = 1
            else:
                d[s[i]] += 1
        for i in range(n):
            if d[s[i]] == 1:
                return i
        else:
            return -1



