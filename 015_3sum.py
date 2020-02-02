class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        pos = []
        neg = []
        zeros = 0
        for i in nums:
            if i > 0:
                pos.append(i)
            elif i < 0:
                neg.append(i)
            elif i == 0:
                zeros += 1
        
        triplet = []
        ret = []        
        s = set()
        if zeros != 0:
            if zeros >= 3:
                triplet = [0,0,0]
                ret.append(triplet)            
            for i in neg:
                if i in s:
                    continue
                s.add(i)
                if abs(i) in pos:
                    triplet = [i, 0, abs(i)]
                    ret.append(triplet)
        
        s =set()
        for i in neg:            
            if i in s:
                continue
            s.add(i)
            d = {}
            for j in pos:
                tmp = -(j + i)
                if tmp in d and d[tmp] != 0:
                    d[tmp] = 0
                    d[j] = 0
                    triplet = [i, tmp, j]
                    ret.append(triplet)      
                elif j not in d:
                    d[j] = 1
        s = set()  
        for i in pos:
            if i in s:
                continue
            s.add(i)
            d = {}
            for j in neg:
                tmp = -(j + i)
                if tmp in d and d[tmp] != 0:
                    d[tmp] = 0
                    d[j] = 0
                    triplet = [i, tmp, j]
                    ret.append(triplet) 
                elif j not in d:
                    d[j] = 1
        return ret
