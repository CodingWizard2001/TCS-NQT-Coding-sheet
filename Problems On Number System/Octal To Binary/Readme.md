# Octal to Binary Conversion

### Description
The provided code converts a octal number to its equivalent binary representation.

### Steps to Solve the Problem
- **Input:** Prompt the user to enter a octal number.
- **Read Input:** Read the input octal number from the user.
- **Octal to Decimal Conversion:** Convert the octal number to its equivalent decimal representation. This is done by repeatedly taking the remainder when the octal number is divided by 10, which gives the least significant digit of the octal number. Multiply this remainder by the corresponding power of 8 and add it to the decimal result. Then, divide the octal number by 10 to move to the next digit.
- **Repetition:** Repeat this process until all digits are processed.
- **Decimal to Binary Conversion:** Convert the obtained decimal number to its binary representation. This is done by repeatedly taking the remainder when the decimal number is divided by 2, which gives the least significant digit of the binary number. Multiply this remainder by the corresponding power of 10 and add it to the binary result. Then, divide the decimal number by 2 to move to the next digit.
- **Repetition:** Repeat this process until all digits are processed.
- **Output:** Print the binary representation of the input octal number.

### Time Complexity
The time complexity of this solution is O(log N), where N is the input octal number.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory.