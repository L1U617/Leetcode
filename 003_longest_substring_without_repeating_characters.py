class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        '''
        d - 用于判断字符是否出现过
        length - 用于存放未遇到重复字符前的子串长度
        tmp = d[val] - index 两个相同字符间的距离，可以保证它们之间的字符没有重复
        i - i指向的字符后的字符若和i之前的字符重复，均按第一次出现处理。例如“cbbc”中，第一个b之前的字符都不该参与到后面的计算，否则两个c之间就会出现重复的b
        length = tmp length继承当前的最长前缀。
        '''
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
