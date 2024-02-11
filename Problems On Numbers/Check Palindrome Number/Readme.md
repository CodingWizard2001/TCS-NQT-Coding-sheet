# Palindrome Number
### Description
A palindrome number is a number that remains the same when its digits are reversed. **Example 121, 1331, and 1221 are palindrome numbers because they read the same forwards and backwards.**

### Steps to Solve the Problem:
 - **Declare and Define the Function:** Define a function `isPalindrome(int num)` that takes an integer `num` as input and returns the reversed number.

 - **Initialize Variables:** Inside the function, initialize variables `sum` to 0. `sum` will store the reversed number.

 - **Reverse the Number:** Using a while loop, reverse the digits of the input number `num`. In each iteration, extract the last digit of `num` using the modulo operator and add it to `sum` after multiplying `sum` by 10. Then, divide `num` by 10 to remove the last digit.

 - **Return the Reversed Number:** After the loop, return the reversed number stored in `sum`.

 - **Input and Output:** In the `main()` function, prompt the user to enter a number. Read the input number from the user. Call the `isPalindrome()` function with the input number as argument. Compare the reversed number with the original input number. If they are equal, output that the number is a palindrome; otherwise, output that it is not a palindrome.

### Time Complexity
The time complexity of this solution is O(log N), where N is the input number.

### Space Complexity
The space complexity of this solution is O(1), as only a constant amount of extra space is required regardless of the size of the input number.