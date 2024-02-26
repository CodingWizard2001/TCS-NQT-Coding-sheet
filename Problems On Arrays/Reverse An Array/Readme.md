# Reverse an array


### Description:
This C++ program takes the size of an array as input from the user, checks if it's a valid size (i.e., not negative or zero), then takes input for the elements of the array. After that, it reverses the array in-place using a two-pointer approach and finally prints the reversed array.

### Steps to Solve the Problem:
- **Input Size:** Take the size of the array from the user. If the size is not valid (i.e., negative or zero), show an error message.
- **Input Elements:** Prompt the user to input the elements of the array one by one.
- **Reverse the Array:** Use a two-pointer approach to reverse the array in-place. Initialize two pointers, one at the start of the array and the other at the end, and swap elements until they meet in the middle.
- **Output:** Print the reversed array.

### Time Complexity:
Time complexity of reverse an array will be 0(n/2),since it's a two-pointer approach, iterating over half of the array

### Space Complexity:
the overall space complexity is O(1).