bool validMountainArray(vector<int> &arr)
{
    if (arr.size() < 3)
    {
        return false;
    }
    bool increasing = true;
    int i;
    for (i = 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[i - 1])
        {
            if (!increasing) return false;
            continue;
        }
        if (arr[i] < arr[i - 1])
        {
            if (increasing)
            {
                if (i == 1) return false;
                increasing = false;
            }
            continue;
        }
        return false;
    }
    return true && !increasing;
}
