# Move Zeroes

## Problem
Given an integer array, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

## Link
https://leetcode.com/problems/move-zeroes/

## Approach
I used a variable to keep track of the position where the next non-zero element should be placed.

Whenever a non-zero element is found, it is swapped into the correct position.

This moves all zeroes to the end while keeping the non-zero elements in their original order.

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)

## Notes
Tested locally with typical and edge-case inputs.