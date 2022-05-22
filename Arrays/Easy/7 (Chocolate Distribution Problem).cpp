class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0 || prices.size()==1)
            return 0;
        int minP=INT_MAX, profit=0;
        for(int i=0; i<prices.size(); i++){
            minP=min(minP, prices[i]);
            profit=max(profit, prices[i]-minP);
        }
        return profit;
    }
};
