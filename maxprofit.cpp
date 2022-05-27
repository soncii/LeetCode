 int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int min=prices[0], max=0;
        for (int i=0; i<prices.size(); i++) {
            if (prices[i]>max) {
                max=prices[i];
                if (max-min>maxProfit) {
                    maxProfit=max-min;
                }
                
            }
            if (prices[i]<min) {
                max=0;
                min=prices[i];
            }
        }
        return maxProfit;
        
    }