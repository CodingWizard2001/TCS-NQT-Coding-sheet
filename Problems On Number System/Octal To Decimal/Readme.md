# Octal to Decimal Conversion


### Description
The provided code converts an octal number to its equivalent decimal representation.

### Steps to Solve the Problem
- **Input:** Prompt the user to enter an octal number.
- **Read Input:** Read the input octal number from the user.
- **Convert to Decimal:** Convert the octal number to its decimal representation. This is done by repeatedly taking the least significant digit of the octal number (i.e., the remainder when divided by 10), multiplying it by the corresponding power of 8, and adding it to the decimal result. Then, divide the octal number by 10 to move to the next digit.
- **Repetition:** Repeat this process until all digits are processed.
- **Output:** Print the decimal representation of the input octal number.

### Time Complexity
The time complexity of this solution is O(log N), where N is the input octal number.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory 