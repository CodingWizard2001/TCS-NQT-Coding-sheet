# Binary to Decimal Conversion


### Description
The provided code converts a binary number to its equivalent decimal representation.

### Steps to Solve the Problem
- **Input:** Prompt the user to enter a binary number.
- **Read Input:** Read the input binary number from the user.
- **Convert to Decimal:** Convert the binary number to its decimal representation. This is done by repeatedly taking the least significant digit of the binary number (i.e., the remainder when divided by 10), multiplying it by the corresponding power of 2, and adding it to the decimal result. Then, divide the binary number by 10 to move to the next digit. 
- **Repetition:** Repeat this process until all digits are processed.
- **Output:** Print the decimal representation of the input binary number.

### Time Complexity
The time complexity of this solution is O(log N), where N is the input binary number.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory