# Comparison of Three Numbers


### Description
The provided code compares three numbers and determines which one is the greatest.

### Steps to Solve the Problem
 - **Input:** Prompt the user to enter three numbers.
 - **Read Inputs:** Read the input values for the three numbers from the user.
 - **Comparison:** Use nested `if-else` statements to compare the three numbers. First, compare the first number `(num1)` with the other two numbers `(num2 and num3)`. If `num1` is greater than both `num2` and `num3`, print that `num1` is the greatest. If not, check if `num2` is greater than `num3`. If it is, print that `num2` is the greatest. Otherwise, print that `num3` is the greatest.
 - **Output:** Print the result of the comparison indicating which number is the greatest.

### Time Complexity
The time complexity of this solution is O(1) because the execution time does not depend on the input size.

### Space Complexity
The space complexity of this solution is also O(1) as it requires only a constant amount of memory to store the input numbers and a few variables needed for comparison and output.