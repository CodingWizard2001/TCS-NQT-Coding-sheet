# Armstrong Number

### Description
An Armstrong number (also known as Narcissistic number, pluperfect digital invariant, or pluperfect number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
**Example :  153 is an Armstrong number because: 1^3 + 5^3 + 3^3 = 153.**

### Steps to Solve the Problem
 - Take the input number.
 - Count the number of digits in the input number.
 - For each digit in the number, raise it to the power of the count of digits and add them.
 - Compare the sum obtained with the original number.
 - If they are equal, the number is an Armstrong number, otherwise it is not.

### Time Complexity
The time complexity of this solution is O(log N), where N is the input number.

### Space Complexity
The space complexity of this solution is O(1), as only a constant amount of extra space is required regardless of the size of the input number.