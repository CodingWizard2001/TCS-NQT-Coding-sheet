# Prime Numbers in a Given Range


### Description
The provided code finds and prints all prime numbers within a given range specified by the user. A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.

### Steps to Solve the Problem
 - **Input Range:** Prompt the user to enter the starting and ending numbers of the range.
 - **Read Inputs:** Read the starting and ending numbers from the user.
 - **Check for Prime:** Implement a function `isPrime(int num)` to check if a given number is prime. Inside the function, check if the number is equal to 1 (as 1 is not considered a prime number) and then iterate through all numbers from 2 to half of the number (`num / 2`). If any of these numbers divides `num` evenly (i.e., without a remainder), the number is not prime.
 - **Find Prime Numbers in Range:** Iterate through the range of numbers from the starting number to the ending number using a for loop. For each number within the range, check if it is prime using the `isPrime()`function. If a number is prime, print it.
 - **Output:** Print the prime numbers found within the specified range.
### Time Complexity
The time complexity of this solution depends on the size of the range specified by the user. If the range is from start to end, the time complexity is O((end - start) * sqrt(N)), where N is the largest number within the range.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the size of the input range. The space complexity of the isPrime() function is also O(1).
