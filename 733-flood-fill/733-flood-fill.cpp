class Solution {
    void floodfiller(vector<vector<int>>& image, int i, int j, int m ,int n, int 
                    currColor, int newColor){
        if(i<0 || i>=m || j<0 || j>=n || image[i][j]==newColor || image[i][j]!=currColor)
            return;
        image[i][j]=newColor;
        floodfiller(image,i-1,j,m,n,currColor,newColor);
        floodfiller(image,i+1,j,m,n,currColor,newColor);
        floodfiller(image,i,j-1,m,n,currColor,newColor);
        floodfiller(image,i,j+1,m,n,currColor,newColor);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size();
        int n =image[0].size();
        int currColor = image[sr][sc];
        floodfiller(image,sr,sc,m,n,currColor,newColor);
        return image;
    }
};