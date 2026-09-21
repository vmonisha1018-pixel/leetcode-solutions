# Binary Search

## Problem
Given a sorted array of integers and a target value, search for the target using binary search.

## Link
https://leetcode.com/problems/binary-search/

## Approach
I used two pointers, `low` and `high`, to represent the current search range.

I calculate the middle position and compare the middle element with the target.

If the middle element is smaller than the target, I search the right half.

If the middle element is larger than the target, I search the left half.

If the target is found, its index is returned.

## Complexity
- Time Complexity: O(log n)
- Space Complexity: O(1)

## Notes
Tested locally with a sorted array containing multiple elements and with a target that was not found.