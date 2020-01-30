class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        '''
        ret = [0] + digits
        l = len(ret)
        i = l - 1
        while i >= 0:
            if ret[i] == 9:
                ret[i] = 0
                i -= 1
            else:
                ret[i] += 1
                break
        if ret[0] == 0:
            ret = ret[1 : l]
        return ret
        '''
        digits.reverse()
        l = len(digits)
        for i in range(l):
            if digits[i] == 9 :
                digits[i] = 0
            else:
                digits[i] += 1
                break
        else:
            digits.append(1)
        digits.reverse()
        return digits
