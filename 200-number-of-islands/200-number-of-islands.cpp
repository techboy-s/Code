class Solution {
private:
    void mark_current_island(vector<vector<char>> &matrix,int x,int y,int r,int c){
        if(x < 0 || x >= r || y < 0 || y >= c || matrix[x][y] != '1'){
            return;
        }
        
        matrix[x][y] = '2';
        
        //Make recursive call in all 4 adjacent directions
        mark_current_island(matrix,x+1,y,r,c);  //DOWN
        mark_current_island(matrix,x,y+1,r,c);  //RIGHT
        mark_current_island(matrix,x-1,y,r,c);  //TOP
        mark_current_island(matrix,x,y-1,r,c);  //LEFT
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
       int row = grid.size();
        
        if(row == 0)
            return 0;
        
        int cols = grid[0].size();
        
        int number_of_island = 0;
        
        for(int i = 0;i<row;i++){
            for(int j = 0;j<cols; j++){
                if(grid[i][j] == '1'){
                    mark_current_island(grid,i,j,row,cols);
                    number_of_island += 1;
                }
            }
        }
        
        return number_of_island;
    }
};