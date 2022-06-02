    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum1(nums.size());
        sum1[0]=nums[0];
        for (int i=1; i<nums.size();i++) {
            sum1[i]=sum1[i-1]+nums[i];
        }
        return sum1;
    }
