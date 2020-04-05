static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0;
        for (int i = 0 ; i < (int)prices.size() -1 ; i++){
            
            if(prices[i+1] > prices[i])
                sum += prices[i+1] - prices[i];
        }
        return sum;
    }
};