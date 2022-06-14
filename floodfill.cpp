    void paint(vector<vector<int>>& image, int sr, int sc, int oldColor, int newColor) {
        if (image[sr][sc]==oldColor) image[sr][sc]=newColor; else return;
        //cout<<sr<<" "<<sc<<endl;
        if (sr+1<image.size()&& image[sr+1][sc]!=newColor) paint(image, sr+1,sc,oldColor,newColor);
        if (sr-1>=0 && image[sr-1][sc]!=newColor) paint(image, sr-1,sc,oldColor,newColor);
        if (sc+1<image[0].size()&& image[sr][sc+1]!=newColor) paint(image, sr,sc+1,oldColor,newColor);
        if (sc-1>=0 && image[sr][sc-1]!=newColor) paint(image, sr,sc-1,oldColor,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int old=image[sr][sc];
        paint(image,sr,sc,old,newColor);
        return image;
    }