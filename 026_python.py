class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l = len(nums)
        if l == 0:
            return 0
        i = 1
        count = 1
        pre = nums[0]
        while i < l:
            if nums[i] != pre:
                pre = nums[i]
                nums[count] = pre
                count += 1
            i += 1
        return count
