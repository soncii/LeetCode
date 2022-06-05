    bool check(vector<int> s) {
        int n=s.size();
        for (int i = 0; i < s.size(); i++) {
		// lower right diagonal
		int ii=i+1;
		int j = s[i];
		while (ii+1 <= n && j+1 <= n) {
			ii++;
			j++;
			if (s[ii-1] == j) {
				return false;
			}
		}
		// upper right diagonal
		ii = i + 1;
		j = s[i];
		while (ii-1 > 0 && j+1 <= n) {
			ii--;
			j++;
			if (s[ii-1] == j) {
				return false;
			}	
		}
        // upper left diagonal
		ii = i + 1;
		j = s[i];
		while (ii-1 > 0 && j-1 > 0) {
			ii--;
			j--;
			if (s[ii-1] == j) {
				return false;
			}

		}
		// lower left diagonal
		ii = i + 1;
		j = s[i];
		while (ii+1 <= n && j-1 > 0) {
			ii++;
			j--;
			if (s[ii-1] == j) {
				return false;
			}
		}
	}
	return true;
    }
    void perm(vector<int> s, int index , int& sum) {
	if (index == s.size()-1) {
		if (check(s)) {
            sum++;
		}
	}
	for (int i = index; i < s.size(); i++) {
		swap(s[index], s[i]);
		perm(s, index+1, sum);
		swap(s[index], s[i]);
	}
}
        int totalNQueens(int n) {
        vector<int> s(n);
        if (n==2||n==3) return 0;
        int index=0;
        int sum=0;
        vector<vector<string>> res;
        for (int i=1; i<=n; i++) {
            s[i-1]=i;
        }
        perm(s,index,sum);
        return sum;
    }
