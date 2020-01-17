class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        i = 0
        start = 0
        move = nums[i]
        for cnt in range(n):
            i = (i + k) % n
            tmp = nums[i]
            nums[i] = move
            move = tmp
            if i == start and start + 1 < n:
                start += 1
                i = start
                move = nums[i]
