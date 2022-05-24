int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        for (int i=0; i<nums.size()-cnt; i++) {
            if (nums[i]==val){
                for (int j=i; j<nums.size()-cnt-1; j++){
                    nums[j]=nums[j+1];
                }
                cnt++;
                i--;
            }
        }
        return nums.size()-cnt;
    }