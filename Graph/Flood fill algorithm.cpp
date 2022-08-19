void dfs(int i,int j,vector<vector<int>>& image,int newColor,vector<vector<int>>&vis,int oldcolor,int n,int m)
   {
       if(i<0 || j < 0 || i >= n || j >= m)
       {
           return;
       }
       if(vis[i][j] || image[i][j] != oldcolor)
       {
           return;
       }
       vis[i][j] = 1;
          image[i][j] = newColor;
       dfs(i+1,j,image,newColor,vis,oldcolor,n,m);
       dfs(i-1,j,image,newColor,vis,oldcolor,n,m);
       dfs(i,j+1,image,newColor,vis,oldcolor,n,m);
       dfs(i,j-1,image,newColor,vis,oldcolor,n,m);
   }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int x = image.size();
        int y = image[0].size();
        vector<vector<int>>vis(x,vector<int>(y,0));
        int oldcolor = image[sr][sc];
        dfs(sr,sc,image,newColor,vis,oldcolor,x,y);
        return image;
    }
};
