# Fibonacci Series Up to Nth Term


### Description
The provided code prints the Fibonacci series up to the Nth term, where N is a positive integer. The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, starting from 0 and 1.

### Steps to Solve the Problem
 - **Input:** Prompt the user to enter the value of N, representing the Nth term of the Fibonacci series.
 - **Read Input:** Read the input value of N from the user.
 - **Initialize Variables:** Initialize variables `a` and `b` to `0` and 1` respectively. These variables will store the first two numbers of the Fibonacci series.
 - **Print Initial Numbers:** Print the first two numbers (`a` and `b`) of the Fibonacci series.
 - **Generate Fibonacci Series:** Use a for loop to generate the remaining terms of the Fibonacci series. In each iteration, calculate the next term `(c)` by adding the previous two terms `(a and b)`. Update `a` with the value of `b`, and `b` with the value of `c`. Print each term as it is generated.
 - **Output:** Print the generated Fibonacci series up to the Nth term.

### Time Complexity
The time complexity of this solution is O(N), where N is the value of the Nth term of the Fibonacci series. This is because each term in the series is computed once in the for loop.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the value of N. The space complexity does not depend on the size of the input.
