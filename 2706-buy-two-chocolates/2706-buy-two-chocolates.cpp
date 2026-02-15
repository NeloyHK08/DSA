class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        sort(prices.begin(), prices.end());
        int total = prices[0] + prices[1];
        if(total<=money){
            return money - total;
        }else{
            return money;
        }

    }
};