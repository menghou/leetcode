//
// Created by houmeng on 17-10-24.
//
/*
You are given coins of different denominations and a total amount of money amount. Write a function to compute the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

Example 1:
coins = [1, 2, 5], amount = 11
return 3 (11 = 5 + 5 + 1)

Example 2:
coins = [2], amount = 3
return -1.

Note:
You may assume that you have an infinite number of each kind of coin.
 */
#include <vector>
#include <iostream>

using std::vector;

//http://www.cnblogs.com/grandyang/p/5138186.html
//dp[i] = min(dp[i], dp[i- j] + 1)

class Solution1 {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        //得先给0位置赋值
        dp[0] = 0;
        for (size_t i = 1; i <= amount; i ++) {
            for (size_t j = 0; j < coins.size(); j++) {
                //这里需要有等于号，不然把等于1的情况掉了
                if (coins[j] <= i) {
                    dp[i] = min(dp[i], dp[i - coins[j]] +1);
                }
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];
    }
};

