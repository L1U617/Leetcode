class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        n = len(matrix)
        step = n - 1
        i = 0
        while n >= 1: 
            edge = n + i - 1
            for j in range(i, edge):
                tmp1 = matrix[i][j]
                row = step - (edge - j) + i
                col = edge
                tmp2 = matrix[row][col]
                matrix[row][col] = tmp1

                col = 2*edge - row - step
                row = edge
                tmp1 = matrix[row][col]
                matrix[row][col] = tmp2

                row = edge - (step - col + i) 
                col = i
                tmp2 = matrix[row][col]
                matrix[row][col] = tmp1 

                matrix[i][j] = tmp2                

            n -= 2
            i += 1
            step -= 2

                
