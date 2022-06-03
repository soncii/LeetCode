int majorityElement(vector<int>& nums) {
        
        int majority,occur=0;
        
        for(int i=0;i<nums.size(); i++)
        {
            if(occur==0)
            {
                majority=nums[i];
                occur++;
            }
            else if(nums[i]==majority)
            {
                occur++;
            }
            else occur--;
        }
        
        return majority;
    }
