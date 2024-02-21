# Factor Generation

### Description
The provided code generates factors of a given number. Factors of a number are the integers that can be multiplied together to produce the given number.

### Steps to Solve the Problem

- **Input:** Prompt the user to enter a number.
- **Read Input:** Read the input number from the user.
- **Generate Factors:** Use a for loop to iterate from 1 to the input number inclusive. In each iteration, check if the current number is a factor of the input number by dividing the input number by the current number and checking if the remainder is 0. If the remainder is 0, then the current number is a factor of the input number, so print it.
- **Output:** Print the generated factors.

### Time Complexity
The time complexity of this solution is O(N), where N is the input number.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory 