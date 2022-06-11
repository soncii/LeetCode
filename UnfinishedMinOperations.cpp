    int minOperations(vector<int>& nums, int x) {
       // if (nums[0]>x && nums[nums.size()-1]>x) return -1;
        int n=nums.size();
        vector<int> lsum(n);
        vector<int> rsum(n);
        lsum[0]=nums[0];
        int res=INT_MAX;
        rsum[n-1]=nums[n-1];
        if (nums[0]==x||nums[n-1]==x) return 1;
        for (int i=1, j=nums.size()-2; i<nums.size(); i++,j--) {
            lsum[i]=nums[i]+lsum[i-1];
            rsum[j]=nums[j]+rsum[j+1];
            if (lsum[i]==x || rsum[j]==x) res=min(res, i+1);
        }
        int start;
        for (start=1; start<n; start++) {
            if (lsum[0]+rsum[start]<=x) break;
        }
        if (start!=n) {
        for (int i=0; i<n-1; i++) {
            if (lsum[i]+rsum[start]==x) res=min(res, i+n-start+1);
            while (start<n-1 && lsum[i]+rsum[start]>x) start++;
            if (start==n) break;
        }
        }
        for (start=n-1; start>=0; start--) {
            if (rsum[n-1]+lsum[start]<=x) break;
        }
        cout<<start;
        if (start!=-1) {
        for (int i=n-2; i>0; i--) {
            cout<<rsum[i]+lsum[start]<<endl;
            if (rsum[i]+lsum[start]==x) res=min(res, start+n-i+1);
            while (start>0 && rsum[i]+lsum[start]>x) start--;
            if (start==0) break;
        }
        }
        if (res!=INT_MAX) return res;
        return -1;
    }
