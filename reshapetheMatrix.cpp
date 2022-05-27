 vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if (r*c!=mat.size()*mat[0].size()) return mat; 
        vector<vector<int>> res;
        if (r==0) r=1;
        if (c==0) c=1;
        vector <int> row(c);
        int k=0; 
        for (int i=0; i<mat.size(); i++) {
            for (int j=0; j<mat[i].size(); j++) {
                if (k<c) {
                    row[k]=mat[i][j];
                    k++;
                } else {
                    k=0;
                    res.push_back(row);
                    row[k]=mat[i][j];
                    k++;
                }
            }
        }
        res.push_back(row);
        
        return res;
    
    }