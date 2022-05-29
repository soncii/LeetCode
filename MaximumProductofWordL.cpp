int maxProduct(vector<string>& words) {
        int max=0;
        vector <map<char,bool>> res(words.size());
        for (int i=0; i<words.size(); i++) {
            for (auto c:words[i]) {
              res[i][c]=true;  
            }
        }
        for (int i=0; i<words.size(); i++) {
            for (int j=i+1; j<words.size(); j++) {
                if (max>=words[i].size()*words[j].size()) continue;
                bool flag=false;
                for (auto c:words[j]) {
                    if (res[i][c]) {
                        flag=true; 
                        break;
                    }
                }
                if (!flag) {
                    if (max<words[i].size()*words[j].size()) max=words[i].size()*words[j].size(); 
                }
            }
        }
        return max;
    }
