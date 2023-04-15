#include <bits/stdc++.h> 
using namespace std;

//without using DP(Codestudio Code)
int maximumProfit(vector<int> &prices){

    int currPrice,maxProfit=0, buyPrice=INT_MAX;

    for(int i=0; i<prices.size(); i++){
            if(prices[i]<buyPrice)
                buyPrice = prices[i];

            currPrice = prices[i] - buyPrice;
        
            if(maxProfit<currPrice)
                maxProfit = currPrice;
        
    }
    return maxProfit;
}

//with DP(Leetcode)
class Solution {
public:
   
    int maxProfit(vector<int>& prices) {
        
        int profit, buyPrice = prices[0], maxProfit = 0;
        
        for(int i=0; i<prices.size(); i++){
            
            profit = prices[i] - buyPrice;
            maxProfit = max(maxProfit, profit);
            buyPrice = min(buyPrice, prices[i]);
        }

        return maxProfit;
    }
};