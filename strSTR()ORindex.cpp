    int strStr(string haystack, string needle) {
        int m=haystack.size();
        int n=needle.size();
        if (n==0) return 0;
        for (int i=0; i<m-n+1; i++) {
            if (haystack[i]==needle[0]) {
                bool match=true;
                for (int j=1; j<n; j++) {
                    if (haystack[i+j]!=needle[j]) {
                        match=false;
                        break;
                    }
                }
                if (match) return i;
            }
        }
        return -1;
    }
