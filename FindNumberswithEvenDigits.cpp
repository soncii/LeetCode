 int Ndigits(int n) {
        int i=0;
        while (n>=10) {
            n=n/10;
            i++;
        }
        return i+1;
    }
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for (int i=0; i< nums.size(); i++) {
            
            if (Ndigits(nums[i])%2==0){
                cnt++;
            }
        }
        return cnt;        
    }