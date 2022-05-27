    bool checkIfExist(vector<int>& arr) {
        unordered_map <int,bool> res;
        for (int i=0; i<arr.size(); i++) {
            res[arr[i]]=true;
        }
        bool flag=false;
        for (int i=0; i<arr.size(); i++) {
        if (res[(arr[i])*2]) {
                if (arr[i]==0) {
                    if (flag) {
                        return true;
                    }
                    flag=true;
                } else
                return true;
            }
        }
        return false;
    }