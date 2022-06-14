    bool rot(vector<vector<int>>& grid, int i, int j, int rm) {
        bool ch=false;
        if (i+1<grid.size() && grid[i+1][j]==1) { grid[i+1][j]=rm; ch=true;}
        if (i-1>=0 && grid[i-1][j]==1) {grid[i-1][j]=rm;ch=true;}
        if (j-1>=0 && grid[i][j-1]==1) {grid[i][j-1]=rm;ch=true;}
        if (j+1<grid[0].size() && grid[i][j+1]==1) {grid[i][j+1]=rm;ch=true;}
        return ch;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int rm=4; 
        bool change=true;
        while (change) {
            change = false; 
            for (int i=0; i<grid.size(); i++) {
                for (int j=0; j<grid[0].size(); j++) {
                    if (grid[i][j]==2 || grid[i][j]==rm-1) {
                        //change=true;
                        grid[i][j]=2;
                        if (rot(grid,i,j,rm)) change=true;
                    }
                }
            }
            rm++;
        }
        for (int i=0; i<grid.size(); i++) {
                for (int j=0; j<grid[0].size(); j++) {
                    if (grid[i][j]==1) return -1;
                }
            }
        return rm-5;
    }