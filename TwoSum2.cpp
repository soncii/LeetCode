    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i=0; i<numbers.size(); i++) {
            int j=numbers.size()-1;
            if (i!=0 && numbers[i]==numbers[i-1]) continue;
            while(target-numbers[i]<numbers[j]) j--;
            if (numbers[i]+numbers[j]==target) return {i+1,j+1};
        }
        return {0,0};
    }