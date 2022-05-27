vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> dict;
    vector<int> res;
    dict[nums[0]] = -1;
    for (int i = 1; i < nums.size(); i++)
    {
        dict[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (dict[target - nums[i]] != 0)
        {

            int val;
            if (dict[target - nums[i]] == -1)
                val = 0;
            else
                val = dict[target - nums[i]];
            if (val != i)
            {
                res.push_back(i);
                res.push_back(val);
                return res;
            }
        }
    }
    return res;
}