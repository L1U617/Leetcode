class Solution(object):
    def findMaximumXOR(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans = 0
        mask = 0

        for i in range(31, -1, -1):
            mask |= 1 << i
            s = set()
            for item in nums:
                prefix = item & mask
                s.add(prefix)

            temp = ans | (1 << i)
            for item in nums:
                prefix = item & mask
                if temp ^ prefix in s:
                    ans = temp
                    break
        
        return ans
