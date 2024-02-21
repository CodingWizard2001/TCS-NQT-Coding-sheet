# Decimal to Octal Conversion


### Description
The provided code converts a decimal number to its equivalent octal representation.

### Steps to Solve the Problem
- **Input:** Prompt the user to enter a decimal number.
- **Read Input:** Read the input decimal number from the user.
- **Convert to Octal:** Convert the decimal number to its octal representation. This is done by repeatedly taking the remainder when the decimal number is divided by 8, which gives the least significant digit of the octal number. Multiply this remainder by the corresponding power of 10 and add it to the octal result. Then, divide the decimal number by 8 to move to the next digit. 
- **Repetition:** Repeat this process until all digits are processed.
- **Output:** Print the octal representation of the input decimal number.

### Time Complexity
The time complexity of this solution is O(log N), where N is the input decimal number.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory 