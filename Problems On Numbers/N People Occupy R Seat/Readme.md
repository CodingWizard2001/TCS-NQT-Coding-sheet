# Permutations in which N people can occupy R seats

### Description
Find permutations in which n people can occupy r seats in a classroom.

### Steps to Solve the Problem

- **Prompt for input:** Prompt the user to enter the number of people and the number of seats available.
- **Input validation:** Check if the entered values are valid. Ensure that both the number of people and the number of seats are non-negative integers, and that the number of seats is less than or equal to the number of people.
- **Calculate factorial:** Implement a function to calculate the factorial of a given number. The factorial of a non-negative integer n (denoted as n!) is the product of all positive integers less than or equal to n. You can calculate the factorial iteratively or recursively.
- **Compute the number of arrangements:** Use the factorial function to calculate the total number of possible arrangements of people in the available seats. Since the order matters (i.e., different arrangements result in different seating configurations), you need to compute permutations.
- **Output the result:** Print the number of possible seating arrangements to the user.
- **Handle errors:** If there are any errors during input validation or computation, provide appropriate error messages to the user.

### Time Complexity
The time complexity of this solution is O(n)

### Space Complexity
The space complexity of this solution is O(1)