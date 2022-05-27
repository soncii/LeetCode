    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector <int> res;
        int j=0;
        for (int i=0; i<nums2.size(); i++) {
            while (j<nums1.size() && nums1[j]<nums2[i]) j++;
            if (j==nums1.size()) break;
            if (nums1[j]==nums2[i]) { 
                res.push_back(nums1[j]);
                j++;
            }
        }
        return res;
    }