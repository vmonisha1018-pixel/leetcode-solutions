# Best Time to Buy and Sell Stock

## Problem
Given an array of stock prices, find the maximum profit that can be achieved by buying on one day and selling on a later day.

## Link
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach
I keep track of the lowest price seen so far.

For each price, I calculate the possible profit by subtracting the lowest price from the current price.

If this profit is greater than the maximum profit found so far, I update the maximum profit.

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)

## Notes
Tested locally with typical stock price inputs and checked the maximum possible profit.