# Express given number as Sum of Two Prime Numbers

### Description
Given a number n, express the number as a sum of 2 prime numbers.

### Steps to Solve the Problem
- The `prime_Check` function takes an integer `num` as input and checks if it's a prime number.
    - If num is less than or equal to 1, it returns 0 indicating that it's not a prime number.
    - It then iterates from `2` to `num - 1` and checks if num is divisible by any number in that range. If it finds any divisor, it returns 0 indicating that num is not `prime`. Otherwise, it stores the divisor in the variable `store`.
    - If no divisor is found, it returns the last stored divisor `store`.
- The `prime` function takes an integer num as input and checks if it can be expressed as the sum of two prime numbers.
    - It calls the `prime_Check` function to check if num is `prime` and stores the result in the variable number.
    - It then performs a bitwise `AND` operation between `number` and `number - 2`. If the result is non-zero, it returns true indicating that `num` can be expressed as the sum of two prime numbers. Otherwise, it returns false.
- In the `main` function, it prompts the user to enter a number and reads the input.
- It calls the `prime` function with the input number and prints whether the number can be expressed as the sum of two prime numbers.

### Time Complexity
The time complexity of this solution is O(sqrt(n))

### Space Complexity
The space complexity of this solution is O(1)