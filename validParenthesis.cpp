 bool isValid(string s) {
        stack<char> q;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            q.push(s[i]);
        }
        
        if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            char c = s[i];
            if (q.empty()) {
                return false;
            }
            
            char l = q.top();
            if (((c == ')') && (l == '(')) || ((c == ']') && (l == '[')) || ((c == '}') && (l == '{'))) {
                
                q.pop();
                continue;
            }
            return false;
        }
    }
    if (q.empty()) {
        return true;
    }
    return false;
    }
