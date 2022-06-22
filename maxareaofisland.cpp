    void calc(vector<vector<int>>& grid, int i, int j, int&area) {
        area++;
        grid[i][j]=0;
        if (i+1<grid.size() && grid[i+1][j]==1) calc(grid,i+1,j,area);
        if (i-1>=0 && grid[i-1][j]==1) calc(grid,i-1,j,area);
        if (j+1<grid[0].size() && grid[i][j+1]==1) calc(grid,i,j+1,area);
        if (j-1>=0 && grid[i][j-1]==1) calc(grid,i,j-1,area);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxarea=0;
        for (int i=0; i<grid.size(); i++) {
            for (int j=0; j<grid[0].size(); j++) {
                if (grid[i][j]==1) {
                    int area=0;
                    calc(grid,i,j,area);
                    if (area>maxarea) maxarea=area;
                }
            }
        }
        return maxarea;
    }