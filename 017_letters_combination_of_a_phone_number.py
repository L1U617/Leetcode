class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        keyboard = [['a','b','c'], ['d','e','f'],
         ['g','h','i'],['j','k','l'],['m','n','o'],
         ['p','q','r','s'],['t','u','v'],['w','x','y','z']]
        l = []
        if len(digits) == 0:
            return l
        def getOutput(n, s):
            if n >= len(digits):
                l.append(s)
                return 
            idx = int(digits[n]) - 2
            letters = keyboard[idx]
            for letter in letters:
                getOutput(n + 1, s + letter)

        getOutput(0, '')
        return l
