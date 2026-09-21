# Valid Parentheses

## Problem
Given a string containing the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

A valid string must have matching and correctly ordered opening and closing brackets.

## Link
https://leetcode.com/problems/valid-parentheses/

## Approach
I used a stack to store opening brackets.

When a closing bracket is found, I check whether it matches the most recent opening bracket in the stack.

If the brackets do not match, the string is invalid.

After processing the entire string, the stack must be empty for the string to be valid.

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(n)

## Notes
Tested locally with:
1. `({[]})` → Valid Parentheses
2. `([)]` → Invalid Parentheses