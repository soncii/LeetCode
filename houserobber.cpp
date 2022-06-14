    int DP(vector<int>& nums, int i, vector<int>& s) {
        if (i>=nums.size()) return 0;
        if (i==nums.size()-1) {
            s[i]= nums[nums.size()-1];   
        }
        if (i==nums.size()-2) {
            s[i]= nums[nums.size()-2];
        }
        if (s[i]!=-1) return s[i];
        for (int j=i; j<nums.size(); j++) {
            s[j]=nums[j]+max(DP(nums, j+3, s), DP(nums,j+2,s));
        }
        return s[i];
    }
    int rob(vector<int>& nums) {
        vector<int> s(nums.size()+1, -1);
        //if (nums.size()==1) return nums[0];
        if (nums.size()==2) return max(nums[0],nums[1]);
        int m= DP(nums,0,s);
        return s[0]>s[1] ? s[0]:s[1];
    }