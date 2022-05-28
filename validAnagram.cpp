    bool isAnagram(string s, string t) {
        int hasht[26]={0};
        if (s.size()!=t.size()) return false;
        for (auto c:s) {
            hasht[c-'a']++; 
        }
        
        for (auto c:t){
            if (--hasht[c-'a']<0) return false;
        }
        return true;
    }
