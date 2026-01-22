// ---------------------------------------------------------
// 🛒 Best Time to Buy and Sell Stock
// ---------------------------------------------------------
// Problem Links:
// LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// GFG: https://www.geeksforgeeks.org/stock-buy-sell-problem-dp-7/

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------------------------
// FUNCTION: maxProfit
// ---------------------------------------------------------
int maxProfit(vector<int>& prices) {
    int miniBuy = prices[0];
    int profit = 0;
    int cost;

    for(int i = 1; i < prices.size(); i++) {
        cost = prices[i] - miniBuy;         // calculate today's profit
        profit = max(profit, cost);         // update max profit
        miniBuy = min(miniBuy, prices[i]);  // update minimum buying price
    }

    return profit;
}

// ---------------------------------------------------------
// MAIN FUNCTION
// ---------------------------------------------------------
int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int ans = maxProfit(arr);
    cout << ans;

    return 0;
}
