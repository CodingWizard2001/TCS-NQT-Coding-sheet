# Palindrome Number Finder in a Given Range

### Description
The provided code finds all palindrome numbers within a given range specified by the user. A palindrome number remains the same when its digits are reversed. **For instance, 121, 1331, and 1221 are palindrome numbers because they read the same forwards and backwards.**

### Steps to Solve the Problem
 - **Input Range:** Prompt the user to enter the starting and ending numbers of the range.
 - **Read Inputs:** Read the starting and ending numbers from the user.
 - **Check for Palindrome:** Implement a function `isPalindrome(int num)` to check if a given number is a palindrome. Inside the function, reverse the digits of the number using a while loop and check if the reversed number is equal to the original number.
 - **Find Palindromes in Range:** Iterate through the range of numbers from the starting number to the ending number using a for loop. For each number within the range, check if it is a palindrome using the `isPalindrome()` function. If a number is a palindrome, print it.
 - **Output:** Print the palindrome numbers found within the specified range.

### Time Complexity
The time complexity of this solution depends on the size of the range specified by the user. If the range is from start to end, the time complexity is O((end - start) * d), where d is the average number of digits in the numbers within the range.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the size of the input range.