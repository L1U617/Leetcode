class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        A = sorted(nums)
        n = len(A)
        ans = 0
        gap = A[0] + A[1] + A[2] - target
        for i in range(n):
            if i > 0 and A[i] == A[i - 1]:
                continue
            left = i + 1
            right = n - 1
            while left < right:
                tmp = A[i] + A[left] + A[right] - target
                if abs(tmp) < abs(gap):
                    gap = tmp
                if tmp < 0:
                    left += 1
                elif tmp > 0:
                    right -= 1
                else:
                    return target
        return target + gap
