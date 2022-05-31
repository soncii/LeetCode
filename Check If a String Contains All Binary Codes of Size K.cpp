        set<string> um;
        int l=s.size();
        int len=l-k+1;
        for (int i=0; i<len; i++) {
            um.insert(s.substr(i,k));
        }
        return um.size()==pow(2,k);
    }
