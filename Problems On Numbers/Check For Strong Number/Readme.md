# Strong Number Check

### Description
The provided code checks whether a given number is a strong number or not. A strong number is a number whose sum of factorial of digits is equal to the number itself.

### Steps to Solve the Problem
- **Input:** Prompt the user to enter a number.
- **Read Input:** Read the input number from the user.
- **Check Strong Number:** Implement a function isStrong(int num) to check if the given number is a strong number. Inside this function, iterate through each digit of the number. For each digit, calculate its factorial and add it to a running total. Finally, check if the total sum is equal to the input number. If it is, return true; otherwise, return false.
- **Output:** Print whether the given number is a strong number or not.


### Time Complexity
The time complexity of this solution is O(log N * log D), where N is the input number and D is the number of digits in the input number.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the size of the input number.