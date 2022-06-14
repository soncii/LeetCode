    void call (vector<vector<int>>& triangle, int n, int j, int l, vector<vector<int>>& ksh) {
        if (n==l) { 
            //cout<<"Hey";
            ksh[n][j]=triangle[n][j];
            return;
        }
        for (int i=0; i<=n; i++) {
            //cout<<"Exec";
            if (ksh[n+1][i]==INT_MIN) call(triangle,n+1,i,l,ksh);
            if (ksh[n+1][i+1]==INT_MIN) call(triangle,n+1,i+1,l,ksh);
            ksh[n][i]=triangle[n][i]+min(ksh[n+1][i], ksh[n+1][i+1]);
        }
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> ksh;
        int n=triangle.size();
        for (int i=1; i<=n;i++) {
            vector<int> line(i);
            for (int j=0; j<i; j++) {
                line[j]=INT_MIN;
            }
            ksh.push_back(line);
        }     
        call(triangle, 0, 0, n-1, ksh);
        return ksh[0][0];
        
    }