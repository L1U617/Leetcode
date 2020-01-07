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

        dp = [False for j in range(subSum + 1)]
        dp[0] = True
        
        for j in range(subSum + 1):
            if nums[0] == j:
                dp[j] = True
                break

        for i in range(1, n):
            for j in range(subSum, 0, -1):
                if j >= nums[i]:
                    dp[j] = dp[j] or dp[j - nums[i]]
        
        return dp[subSum]
