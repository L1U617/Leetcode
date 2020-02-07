class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        i = 0
        j = len(height) - 1
        area = 0
        maxA = 0
        while(i != j):
            h = min(height[i], height[j])
            area = h * (j - i)
            maxA = max(maxA, area)
            if height[i] < height[j]:
                i += 1
            else:
                j -= 1
        return maxA
