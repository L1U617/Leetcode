class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        stack = []
        pushIndex, popIndex = 0, 0
        n = len(pushed)
        while pushIndex < n:
            stack.append(pushed[pushIndex])
            pushIndex += 1
            while stack and stack[-1] == popped[popIndex]:
                stack.pop()
                popIndex += 1
        if stack: 
            return False
        else:
            return True
