int lengthOfLongestSubstring(string s) {
    int max=0;
    int start=0;
    vector<int> um(256,0);
    for (int i=0; i<s.size(); i++) {
        if (um[s[i]]==1) {
            if (i-start>max) max=i-start;
            int j=start;
            do {um[s[j]]=0; j++;} while (s[j-1]!=s[i]);
            start=j;
        } 
        um[s[i]]=1;
    }
    if(s.size()-start>max) max=s.size()-start;
    return max;
}