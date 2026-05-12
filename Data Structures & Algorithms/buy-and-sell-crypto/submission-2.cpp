class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0,sell=1,maxP=0;
        while(sell<prices.size()){
            if(prices[buy]<prices[sell]){
                maxP=max(maxP,(prices[sell]-prices[buy]));
            }else{
                buy=sell;
            }
            sell++;
        }
        return maxP;
    }
};
