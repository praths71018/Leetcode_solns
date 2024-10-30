class Solution {
public:
    void dfs(vector<vector<int>> &grid,int &val,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0){
            return;
        }
        
        // when grid[i][j]==1
        // Mark the cell as visited by setting it to 0
        grid[i][j] = 0;
        val+=1; 

        dfs(grid,val,i+1,j);
        dfs(grid,val,i-1,j);
        dfs(grid,val,i,j+1);
        dfs(grid,val,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                // Whenever you encounter a new island(grid[i][j]==1) ; get the area of the island(via dfs) and compare it with the previous maximum area of island 
                if(grid[i][j]==1){
                    int val=0;
                    dfs(grid,val,i,j);
                    maxArea=max(maxArea,val);
                }
            }
        }
        return maxArea;
    }
};