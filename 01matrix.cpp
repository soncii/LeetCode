class Solution {
public:
    int DP(vector<vector<int>>& mat, vector<vector<int>>& dp, int i, int j, int si, int sj){
        if (mat[i][j]==0) {
            dp[i][j]=0;
            return 0;
        }
        if (dp[i][j]!=-1) return dp[i][j];
            int up,d,l,r;
            if (i+1<mat.size() && dp[i+1][j]==-1 && (j!=sj || i+1!=si)) dp[i+1][j]=DP(mat,dp, i+1,j,i,j)+1;
            if (i-1>=0 && dp[i-1][j]==-1 && (j!=sj || i-1!=si)) dp[i-1][j]=DP(mat,dp, i-1,j,i,j)+1;
            if (j+1<mat[0].size() && dp[i][j+1]==-1 && (j+1!=sj || i!=si)) dp[i][j+1]=DP(mat,dp, i,j+1,i,j)+1;
            if (j-1>=0 && dp[i][j-1]==-1 && (j-1!=sj || i!=si) ) dp[i][j-1]=DP(mat,dp, i,j-1,i,j)+1;
        
            if (i+1<mat.size()) up=dp[i+1][j]; else up=10000;
            if (i-1>=0) d=dp[i-1][j]; else d=10000;
            if (j+1<mat[0].size()) l=dp[i][j+1]; else l=10000;
            if (j-1>=0) r=dp[i][j-1]; else r=10000;
            dp[i][j]=min(min(up,d),min(l,r))+1;
            return dp[i][j];
        
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> res(mat.size(), vector<int>(mat[0].size(), -1));
        for (int i=0; i<mat.size();i++){
            for (int j=0; j<mat[0].size(); j++) {
                int m=DP(mat,res,i,j,-1,-1);
            }
        }
        
        return res;
    }
};