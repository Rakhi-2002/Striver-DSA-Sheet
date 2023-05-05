#include <bits/stdc++.h>
using namespace std;

//1. Greedy Approach - always tries for max & just lesser coin value than given amount

#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int ans = 0, n = 9;
    
    for(int i=n-1; i>=0; i--){
        while(amount >= coins[i]){
            amount -= coins[i];
            ans++;
        }
    }

    return ans;
}
