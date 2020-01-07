class Solution(object):
    def canPartition(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n = len(nums)
        sum = 0
        for i in nums:
            sum += i
        if sum % 2 != 0:
            return False
        subSum = sum / 2

        dp = [[False for j in range(subSum + 1)] for i in range(n)]
        for i in range(n):
            dp[i][0] = True
        
        for j in range(subSum + 1):
            if nums[0] == j:
                dp[0][j] = True
                break

        for i in range(1, n):
            for j in range(1, subSum + 1):
                if j - nums[i] >= 0:
                    dp[i][j] = (dp[i - 1][j] or dp[i - 1][j - nums[i]])
                else:
                    dp[i][j] = (dp[i - 1][j] or False)
        
        return dp[n - 1][subSum]
