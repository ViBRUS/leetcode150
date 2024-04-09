class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        // 2 Pointers approach
        // int l=0,r=1;
        // int pr=0;
        // while(r != prices.size()) {
        //     if(prices[l] < prices[r]) {
        //         if(prices[r] - prices[l] > pr) {
        //             pr = prices[r]-prices[l];
        //         }
        //     } else {
        //         l=r;
        //     }
        //     r++;
        // }
        // return pr;

        // Kadane
        int buy = prices[0];
        int pr = 0;
        for(int i=1;i<prices.size(); i++) {
            if(prices[i]<buy) buy = prices[i];
            else if(prices[i]-buy > pr) pr = prices[i]-buy;
        }
        return pr;
    }
};