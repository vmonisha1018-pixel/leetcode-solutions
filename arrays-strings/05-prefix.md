# Longest Common Prefix

## Problem
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string.

## Link
https://leetcode.com/problems/longest-common-prefix/

## Approach
I compare the characters of all strings with the characters of the first string.

If a character is different in any string, the common prefix ends at that position.

The characters before that position form the longest common prefix.

## Complexity
- Time Complexity: O(n × m)
- Space Complexity: O(1)

## Notes
Tested locally with:
1. `flower`, `flow`, `flight` → `fl`
2. `dog`, `racecar`, `car` → empty prefix