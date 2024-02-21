# Abundant Number Check


### Description
The provided code checks whether a given number is an abundant number or not. An abundant number is a number for which the sum of its proper divisors is greater than the number itself.

### Steps to Solve the Problem
- **Input:** Prompt the user to enter a number.
- **Read Input:** Read the input number from the user.
- **Calculate Sum of Proper Divisors:** Iterate through each number from 1 to the input number (inclusive) and check if it is a divisor of the input number. If it is, add it to the sum of divisors.
- **Check Abundant Number:** Compare the sum of proper divisors with the input number. If the sum is greater than the input number, then it is an abundant number.
- **Output:** Print whether the given number is an abundant number or not.

### Time Complexity
The time complexity of this solution is O(N), where N is the input number.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the size of the input number.
