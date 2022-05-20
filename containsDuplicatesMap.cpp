bool containsDuplicate(vector<int>& nums) {
unordered_map<int, bool> ht;
  for (int i=0; i<nums.size(); i++) {
    if (ht[nums[i]]){
      return true;
    } 
    ht[nums[i]]=true;
  }
  return false;
    }
