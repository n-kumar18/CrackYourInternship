class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,flag=0;
        
        for(int i=0; i<prices.size()-1; i++){
            if(prices[i]<prices[i+1] && flag==0){
                //Buy stock
                ans-=prices[i];
                flag=1;
            }
            else if(prices[i]>prices[i+1] && flag==1){
                //Sell stock
                ans+=prices[i];
                flag=0;
            }
        }
        if(flag==1)
            ans+=prices[prices.size()-1];
        return ans;
    }
};
