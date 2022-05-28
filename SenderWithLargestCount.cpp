int WordCount(string s) {
        int cnt=0;
        for (int i=0; i<s.size(); i++) {
            if (s[i]==' ') {
                cnt++;
            }
        }
        return cnt+1;
    }
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int> um;
        for (int i=0; i<messages.size(); i++) {
            um[senders[i]]+=WordCount(messages[i]);
        }
        int max=0;
        string k;
        for (auto& [key,value]:um) {
            if (value>=max) { max=value; k=key;}
        }
        return k;
        
        
    }
