# Reverse Digits Of a Number


### Description
The provided code reverses the digits of a given number.

### Steps to Solve the Problem
 - Input: Prompt the user to enter a number.
 - Read Input: Read the input number from the user.
 - Digit Reversal: Initialize a variable reverse to 0. Use a while loop to iterate until the input number becomes 0. In each iteration, extract the last digit of the number using the modulo operator and add it to the reverse after multiplying reverse by 10. Then, divide the number by 10 to remove the last digit.
 - Output: Print the reversed number.

### Time Complexity
The time complexity of this solution is O(log N), where N is the input number.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the size of the input number.

