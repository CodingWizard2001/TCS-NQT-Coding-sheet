# Sum of Digits of a Number


### Description
The provided code calculates the sum of digits of a given number.

### Steps to Solve the Problem
- Input: Prompt the user to enter a number.
- Read Input: Read the input number from the user.
- Calculate Sum of Digits: Iterate through each digit of the input number. Extract each digit using `modulo operation (% 10)` and add it to a running total. Then, divide the number by 10 to move to the next digit. Repeat this process until all digits are processed.
- Output: Print the calculated sum of digits of the input number.

### Time Complexity
The time complexity of this solution is O(log N), where N is the input number.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the size of the input number. 