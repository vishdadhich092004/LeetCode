class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_element = prices[0];

        for(int i=0;i<prices.size();i++){
        
            int cost = prices[i]- min_element;
            max_profit = max(max_profit,cost);
            min_element = min(min_element,prices[i]);
        }
        return max_profit;
    }
};