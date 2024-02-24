# Smallest Number in the array

### Description:
This C++ program aims to find the smallest number in an array provided by the user.

### Steps To solve:
- **Input Size:** The user inputs the size of the array.
- **Array Input:** The program prompts the user to input the elements of the array.
- **Array Initialization:** An array of the specified size is created.
- **Array Filling:** The program iterates through each element of the array and assigns the user-input values to them.
- **Minimum Search:** It initializes a variable mini with the maximum possible integer value (using INT_MAX from the `<climits>` header). Then, it iterates through each element of the array and compares it with mini. If an element is found to be smaller than mini, it updates the value of mini to that element.
- **Output:** Finally, the program prints out the smallest number found in the array.

### Time Complexity:
Overall, the time complexity is O(n) due to the linear iteration over the array to find the minimum element.

### Space Complexity Analysis:
The space complexity is O(n) due to the array created with the size provided by the user. The space required is proportional to the input size.