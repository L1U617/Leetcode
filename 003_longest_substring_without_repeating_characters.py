class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        d = {}
        length = 0
        maxL = 0
        i = 0
        for index, val in enumerate(s):
            if val in d and d[val] >= i:
                i = d[val]
                tmp = index - d[val]
                d[val] = index
                length = max(length, tmp)
                maxL = max(maxL, length)
                length = tmp
            else:
                length += 1
                d[val] = index
        
        maxL = max(maxL, length)
        return maxL
