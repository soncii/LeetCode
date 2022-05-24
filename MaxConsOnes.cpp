int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0, max=0;
        for (int i=0; i< nums.size(); i++){
            if (nums[i]==1) {
                cnt++;
            } else {
                if (cnt>max) {
                    max=cnt;
                }
                cnt=0;
            }
            
        }
        if (cnt>max) {
            return cnt;
        }
        return max;
    }