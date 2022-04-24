class Solution {
    int findArea(vector<vector<int>>& grid, int i, int j,int m,int n){
         if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j]==0)
            return 0;
        grid[i][j]=0;
        
        int count=1;
        count+=findArea(grid,i-1,j,m,n);
        count+=findArea(grid,i+1,j,m,n);
        count+=findArea(grid,i,j-1,m,n);
        count+=findArea(grid,i,j+1,m,n);
        return count;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int m=grid.size();
        int n = grid[0].size();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
               
                if(grid[i][j] == 1)
                    ans= max(ans, findArea(grid,i,j,m,n));
            }
        }
            return ans;
    }
};


   