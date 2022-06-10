    int search(vector<int>& nums, int target) {
        int start=0, end=nums.size();
        bool finish=true;
        int i=(start+end)/2;
        while (i>=0 && nums[i]!=target){
            if (nums[i]<target) {
                start=i;
            } else if (nums[i]>target) {
                end=i;
            }
            if (i==start+(end-start)/2) return -1;
            i=start+(end-start)/2;
        }  
        return i;
    }

    int firstBadVersion(int n) {
    int start=0;
    int finish=n;
    if (n==1) return n;
    n=n/2;
    while(1) {
        if (isBadVersion(n)){
            if (n==1 || n==0 || !isBadVersion(n-1)) return n;
            finish=n;
        } else {
            start=n+1;
        }
        n=start+(finish-start)/2;
    }
}

int searchInsert(vector<int>& nums, int target) {
    int m=0,n=nums.size();
    int i=m+(n-m)/2;
    while(target!=nums[i]) {
        if (target<nums[i]) {
            n=i;
        } else {
            m=i;
        }
        if (i==m+(n-m)/2) {
        if (target<nums[i]) return i; else return i+1;
        }
        i=m+(n-m)/2;
    }
    return i;
}