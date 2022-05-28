    bool canConstruct(string ransomNote, string magazine) {
        //sort(ransomNote.begin(),ransomNote.end());
        //sort(magazine.begin(),magazine.end());
        //int j=0;
        //for (auto c:ransomNote) {
         //   while (j<magazine.size() && magazine[j]<c) j++;
           // if (j==magazine.size()) return false;
            //if (c==magazine[j]) { j++; continue;}
            //else return false;
        //}
        //return true;
        
        int r[26] = {0};
        for (auto c:magazine) {
            r[c-'a']++;
        }
        for (auto c:ransomNote) {
            r[c-'a']--;
            if (r[c-'a']<0) return false;
        } 
        return true;
    }
