class Solution {
public:
// Traverse the grid by going to neighbours of starting part(sr,sc) non stop until
// and replace values with color of new one for those values having sapme val as starting point
// i is row, j is column
    void dfs(vector<vector<int>>& image,int i,int j,int val,int newColor){
        if(i<0 || i>=image.size() || j<0 || j>=image[0].size() || image[i][j]==newColor || image[i][j]!=val){
            return;
        }
        image[i][j]=newColor;
        dfs(image,i-1,j,val,newColor);//prev row 
        dfs(image,i+1,j,val,newColor); //next row
        dfs(image,i,j-1,val,newColor); // prev column
        dfs(image,i,j+1,val,newColor); //next column
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val=image[sr][sc];
        dfs(image,sr,sc,val,color);
        return image;
    }
};