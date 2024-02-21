# Automorphic Number Check

### Description
The provided code checks whether a given number is an automorphic number or not. An automorphic number is a number whose square ends with the same digits as the number itself.

### Steps to Solve the Problem
- **Input:** Prompt the user to enter a number.
- **Read Input:** Read the input number from the user.
- **Check Automorphic Number:** Implement a function `isAutomorphic(int num)` to check if the given number is an automorphic number. Inside this function, calculate the square of the input number `(num * num)`. Then, extract the last digits of the square by taking the modulus with 100 (assuming the number of digits in the square is less than or equal to 100). Finally, check if the extracted digits are equal to the input number. If they are, return true; otherwise, return false.
- **Output:** Print whether the given number is an automorphic number or not.

### Time Complexity
The time complexity of this solution is O(1) as it involves a fixed number of arithmetic operations and comparisons, regardless of the size of the input number.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the size of the input number.