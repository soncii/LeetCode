//     int max=0; UNFINISHED DIVIDE AND CONQUER
//     int maxSubArray(vector<int>& nums) {
//         if (nums.size()==1) return nums[0];
//         int lsum=0,rsum=0;
//         vector<int> lnum(nums.begin(), nums.begin()+nums.size()/2);
//         vector<int> rnum(nums.begin()+nums.size()/2, nums.end());
//         lsum=maxSubArray(lnum);
//         rsum=maxSubArray(rnum);
//         if (lsum+rsum>max) {
//         max=lsum+rsum;
//         cout<<max;
//         }
//         return lsum+rsum;
//     }

    int maxSubArray(vector<int>& nums) { //CADANE ALGO
        int max=INT_MIN;
        int tempsum=0;
        for (int i=0; i<nums.size(); i++) {
            tempsum+=nums[i];
            if (tempsum>max) max=tempsum;
            if (tempsum<0) tempsum=0;
        }
        return max;
    }

