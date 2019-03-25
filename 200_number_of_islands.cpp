class Solution {
public:
    void Traverse(int x, int y, vector<vector<char>>& grid, vector<vector<char> >& visited){
        int width = grid[0].size();
        int length = grid.size();
        if(x >= 0 && x < length && y >= 0 && y < width){
            if(grid[x][y] == '1' && visited[x][y] != '2'){
                visited[x][y] = '2';
                Traverse(x - 1, y, grid, visited);
                Traverse(x + 1, y, grid, visited);
                Traverse(x, y - 1, grid, visited);
                Traverse(x, y + 1, grid, visited);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        vector<vector<char> > visited = grid;
        if(grid.size() == 0) return 0;
        int width = grid[0].size();
        int length = grid.size();
        for(int i = 0; i < length; i++){
            for(int j = 0; j < width; j++){
                if(grid[i][j] == '1' && visited[i][j] != '2'){
                    Traverse(i, j, grid, visited);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
