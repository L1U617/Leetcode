class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        n = len(s)
        if n == 0:
            return ""
        ans = ""
        dp = [["" for j in range(n)] for i in range(2)]
        for j in range(n):
            dp[0][j] = s[j]
            if j != n - 1 and s[j] == s[j + 1]:                
                dp[1][j] = s[j] + s[j + 1]
                ans = dp[1][j]
        if ans == "":
            ans = dp[0][0]
        
        for i in range(2, n):
            indent = i / 2
            index = i % 2 
            for j in range(indent, n - indent):
                if dp[index][j] != "":
                    if index == 0:
                        if s[j - indent] == s[j + indent]:
                            dp[index][j] = s[j - indent] + dp[index][j] + s[j + indent]
                            ans = dp[index][j]
                        else:
                            dp[index][j] = ""
                    else:
                        if j + indent + 1 < n and s[j - indent] == s[j + indent + 1]:
                            dp[index][j] = s[j - indent] + dp[index][j] + s[j + indent + 1]
                            ans = dp[index][j]
                        else:
                            dp[index][j] = ""

        return ans
