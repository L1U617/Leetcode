class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        
        nums1.sort()
        nums2.sort()
        flag = 0
        inter = []
        i = j = 0
        while i < len(nums1) and j < len(nums2):
            if nums1[i] == nums2[j]:
                flag = 1
                inter.append(nums1[i])
                i += 1
                j += 1                
            elif nums1[i] < nums2[j]:
                i += 1
            elif nums1[i] > nums2[j]:
                j += 1
                
        return inter
        """
        inter = []
        d = {}
        for i in nums1:
            if i not in d:
                d[i] = 1
            else:
                d[i] += 1
        
        for i in nums2:
            if i in d:
                inter.append(i)
                d[i] -= 1
                if d[i] == 0:
                    del(d[i])
        return inter
