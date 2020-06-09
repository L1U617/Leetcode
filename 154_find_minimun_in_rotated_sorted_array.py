class Solution:
    def findMin(self, nums: List[int]) -> int:
        '''
        nums.sort()
        return nums[0]
        '''
        '''
        n = len(nums)
        if n == 1:
            return nums[0]
        for i in range(1, n):
            if nums[i] < nums[i - 1]:
                return nums[i]
        return nums[0]
        '''
        n = len(nums)
        right = n - 1
        left = 0
        if nums[left] < nums[right]:
            return nums[0]
        while left <= right:
            mid = (right + left) // 2
            if nums[mid] < nums[right]:
                right = mid
            elif nums[mid] > nums[right]:
                left = mid + 1
            elif nums[mid] == nums[right]:
                right -= 1
        return nums[mid]
