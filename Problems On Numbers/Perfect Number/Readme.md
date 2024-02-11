# Check for Perfect Number

### Description
The provided code checks whether a given number is a perfect number. A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself). For example, 28 is a perfect number because the sum of its proper divisors (1, 2, 4, 7, 14) equals 28.

### Steps to Solve the Problem
 - **Input:** Prompt the user to enter a number.
 - **Read Input:** Read the input number from the user.
 - **Calculate Sum of Divisors:** Implement a function `isPerfect(int num)` to calculate the sum of proper divisors of the given number. Iterate through all numbers from 1 to `num - 1` and check if they are divisors of `num`. If a number is a divisor, add it to the `sum`.
 - **Check for Perfect Number:** Compare the calculated sum of divisors with the original number. If they are equal, the number is a perfect number; otherwise, it is not.
 - **Output:** Print the result indicating whether the number is a perfect number or not.

### Time Complexity
The time complexity of this solution is O(N), where N is the input number.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the size of the input number.