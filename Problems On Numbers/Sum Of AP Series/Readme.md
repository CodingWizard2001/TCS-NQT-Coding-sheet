# Sum of Arithmetic Progression (AP) Series

### Description
The provided code calculates the sum of an Arithmetic Progression (AP) series starting from a given number and ending at another number with a specified step size. An Arithmetic Progression is a sequence of numbers in which the difference between consecutive terms is constant.

### Steps to Solve the Problem
 - **Input Parameters:** Prompt the user to enter the starting number `(start)`, ending number `(end)`, and step size `(step)` for the AP series.
 - **Read Inputs:** Read the input values for `start`, `end`, and `step` from the user.
 - **Calculate Sum:** Initialize a variable sum to 0. Use a for loop to iterate from the start number to the end number (exclusive) with a step size of step. In each iteration, add the current number to the sum.
 - **Output:** Print the calculated sum of the AP series.

### Time Complexity
The time complexity of this solution is O(N), where N is the number of terms in the AP series.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the size of the AP series.