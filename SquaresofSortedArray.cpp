vector<int> sortedSquares(vector<int>& nums) {
        int ind=0;
        int minus=nums.size()-1;
        for (int i=0; i<nums.size(); i++) {
            ind=i;
            if (nums[i]>=0) {
                minus=ind-1;
                break;
            }
        }
        
        vector <int> res;
        int plus=ind;
        if (nums[nums.size()-1]<0) {
            plus++;
        } 
        for (int i=0; i<nums.size(); i++) {
            if (minus>=0) {
                if (plus<nums.size()){
                    if (abs(nums[minus])<abs(nums[plus])) {
                        res.push_back(nums[minus]*nums[minus]);
                        minus--;
                    } else {
                        res.push_back(nums[plus]*nums[plus]);
                        plus++;
                    }
                } else {
                    res.push_back(nums[minus]*nums[minus]);
                        minus--;
                }
            } else {
                res.push_back(nums[plus]*nums[plus]);
                        plus++;
            }
            
        }
        return res;
    }