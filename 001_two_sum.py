class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        s = set()
        dic = {}
        n = len(nums)
        for i in range(n):
            if nums[i] in s:
                break 
            dic[nums[i]] = i
            d = target - nums[i]
            s.add(d)
        
        ans = [i, dic[target - nums[i]]]
        return ans
