class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        i = j = 0
        l = len(nums)
        while j < l:
            if nums[i] == 0:
                if nums[j] != 0:
                    tmp = nums[i]
                    nums[i] = nums[j]
                    nums[j] = tmp
                    i += 1
            else:
                i += 1
            j += 1
