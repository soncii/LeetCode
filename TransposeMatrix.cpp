        vector<vector<int>> res;
        vector<int> line;
        for (int i=0; i<matrix[0].size(); i++){
            for (int j=0; j<matrix.size();j++){
                line.push_back(matrix[j][i]);
            }
            res.push_back(line);
            line.clear();
        }
        return res;
    }
