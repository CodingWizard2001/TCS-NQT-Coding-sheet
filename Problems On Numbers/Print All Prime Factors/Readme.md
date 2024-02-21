# Prime Factors Generation

### Description
The provided code prints all prime factors of a given number. Prime factors of a number are the prime numbers that divide the given number exactly, without leaving a remainder.

### Steps to Solve the Problem
- **Input:** Prompt the user to enter a number.
- **Read Input:** Read the input number from the user.
- **Generate Prime Factors:** Use a for loop to iterate from 2 to the input number. In each iteration, check if the current number `(i)` is a factor of the input number `(num)`. If it is, perform a nested while loop to divide the input number by i as many times as possible while it is divisible. Inside the inner loop, print the current number `(i)`, as it is a prime factor of the input number. Repeat this process until the input number becomes 1.
- **Output:** Print the prime factors of the given number.


### Time Complexity
The time complexity of this solution is O(sqrt(N)), where N is the input number. This is because the loop iterates from 2 to the square root of N, and within each iteration, the number is divided by its prime factors.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory