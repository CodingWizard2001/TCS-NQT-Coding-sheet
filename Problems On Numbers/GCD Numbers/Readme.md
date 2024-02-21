# GCD (Greatest Common Divisor) Calculation


### Description
The provided code calculates the Greatest Common Divisor (GCD) of two given numbers.

### Steps to Solve the Problem
- **Input:** Prompt the user to enter two numbers.
- **Read Input:** Read the input numbers from the user.
- **Calculate GCD:** Implement a loop to iterate from 2 to the minimum of the two input numbers. In each iteration, check if both input numbers are divisible by the current number (i). If they are, update the GCD value (gcd) to the current number. Continue this process until the loop reaches the minimum of the two input numbers.
- **Output:** Print the calculated GCD of the two input numbers.

### Time Complexity
The time complexity of this solution is O(min(A, B)), where A and B are the input numbers.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the size of the input numbers.
