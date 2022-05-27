    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0; i<9; i++) {
            for (int j=0; j<9; j++) {
                if (board[i][j]=='.') continue;
                char temp = board[i][j];
                board[i][j]='.';
                for (int k=0; k<9; k++) if (board[i][k]==temp || board [k][j]==temp) return false;
                int startx=i/3, starty=j/3;
                for (int k=startx*3; k<startx*3+3; k++) {
                    for (int g=starty*3; g<starty*3+3; g++) {
                        if (board[k][g]==temp) return false;
                    }
                }
                
            }
        }
        return true;
    }