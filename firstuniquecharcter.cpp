int firstUniqChar(string s) {
        vector<int> r(26);
        for (auto c:s) {
            r[c-'a']++;
        }
        for (int i=0; i<s.size(); i++) {
            if (r[s[i]-'a']==1) {
                return i;
            }
        }
        return -1;
    }
