class Solution {
public:
    int maxProfit(vector<int>& prices) {
         
        int i=1;
        int pro=0;
        while(i<prices.size())
        {
           if(prices[i-1]<prices[i])
           {
             pro+=prices[i]-prices[i-1];
           }
           i++;
        }
        return pro;
    }
};