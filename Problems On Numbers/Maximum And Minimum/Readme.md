# Maximum and Minimum Digit in a Number


### Description
The provided code finds the maximum and minimum digits in a given number.

### Steps to Solve the Problem
 - **Input:** Prompt the user to enter a number.
 - **Read Input:** Read the input number from the user.
 - **Initialize Variables:** Initialize variables maxi and mini to store the maximum and minimum digits respectively. Initialize maxi to the minimum possible integer value and mini to the maximum possible integer value.
 - **Find Maximum and Minimum Digits:** Use a while loop to iterate until the input number becomes 0. In each iteration, extract the last digit of the number using the modulo operator. Compare the extracted digit with the current maximum and minimum values. If the digit is greater than the current maximum, update maxi. If the digit is less than the current minimum, update mini. Then, divide the number by 10 to remove the last digit.
 - **Output:** Print the maximum and minimum digits found.

### Time Complexity
The time complexity of this solution is O(log N), where N is the input number.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the size of the input number.

