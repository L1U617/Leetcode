class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        n = len(s)
        m = len(p)

        '''
        dp[0][0] = True 空字符串和空表达式能匹配
        dp[i][0] = False 空表达式不能和非空字符串匹配
        '''
        dp = [[False for _ in range(m + 1)] for _ in range(n + 1)]
        dp[0][0] = True

        for i in range(0, n + 1):
            for j in range(1, m + 1):                    
                if p[j - 1] != '*':
                    if i > 0 and (s[i - 1] == p[j - 1] or p[j - 1] == '.'):
                        dp[i][j] = dp[i - 1][j - 1]
                else:                    
                    # *之前的字符不出现
                    if j >= 2:
                        dp[i][j] = dp[i][j - 2]
                    # *之前的字符重复出现
                    if j >= 2 and i > 0 and (p[j - 2] == s[i - 1] or p[j - 2] == '.'):
                        dp[i][j] |= dp[i - 1][j]                   

        return dp[n][m]
