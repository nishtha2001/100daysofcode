class Solution {
    
    void dfs(vector<vector<int>>& image, int i, int j,int m , int n, int curr, int color){
        if(i<0 || i>=m || j<0 || j>=n || image[i][j]==color || image[i][j]!=curr) return;
        
        image[i][j]= color;
        dfs(image,i+1,j,m,n,curr,color);
         dfs(image,i,j+1,m,n,curr,color);
         dfs(image,i-1,j,m,n,curr,color);
         dfs(image,i,j-1,m,n,curr,color);
        
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        int curr = image[sr][sc];
        dfs(image,sr, sc, m, n, curr, color);
        return image;
        
    }
};