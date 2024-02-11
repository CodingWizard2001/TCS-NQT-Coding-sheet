# Check For Prime Number


### Description
A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself. In other words, a prime number is only divisible by 1 and itself. 
**For example, 2, 3, 5, 7, 11, and 13 are prime numbers**

### Steps to Solve the Problem
 - **Declare and Define the Function:** Define a function `isPrime(int num)` that takes an integer `num` as input and returns a boolean value indicating whether the number is prime or not.
 - **Initialize Variables:** Inside the function, initialize a boolean variable `flag` to true. This variable will be used to determine whether the number is prime or not.
 - **Check for Prime:** Use a for loop to iterate from 2 to half of the input number (num / 2). For each iteration, check if the input number num is divisible by the current value of `i`. If num is divisible by `i`, set the `flag` to false and break out of the loop.
 - **Return the Result:** After the loop, return the value of `flag`, which indicates whether the number is prime (true) or not (false).
 - **Input and Output:** In the `main() function`, prompt the user to enter a number. Read the input number from the user. Call the `isPrime()` function with the input number as argument. Based on the return value, output whether the number is prime or not.

### Time Complexity
The time complexity of this solution is O(sqrt(N)), where N is the input number.

### Space Complexity
The space complexity of this solution is O(1), as only a constant amount of extra space is required regardless of the size of the input number.
