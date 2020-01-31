class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        for i in range(9):
            d = [0 for _ in range(10)]
            for j in range(9):
                if board[i][j] == ".":
                    continue
                index = int(board[i][j])
                if d[index] == 1:
                    return False 
                d[index] = 1
        
        for i in range(9):
            d = [0 for _ in range(10)]
            for j in range(9):
                if board[j][i] == ".":
                    continue
                index = int(board[j][i])
                if d[index] == 1:
                    return False 
                d[index] = 1

        for ver in range(0, 7, 3):
            for hor in range(0, 7, 3):
                d = [0 for _ in range(10)]                
                for i in range(ver, ver + 3):
                    for j in range(hor, hor + 3):
                        if board[i][j] == ".":
                            continue
                        index = int(board[i][j])
                        if d[index] == 1:
                            return False 
                        d[index] = 1
        return True
