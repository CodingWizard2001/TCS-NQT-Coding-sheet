# Largest Number in the array

### Description:
This C++ program aims to find the largest number in an array provided by the user.

### Steps To solve:
- **Input Size:** The user inputs the size of the array.
- **Array Input:** The program prompts the user to input the elements of the array.
- **Array Initialization:** An array of the specified size is created.
- **Array Filling:** The program iterates through each element of the array and assigns the user-input values to them.
- **Minimum Search:** It initializes a variable maxi with the maximum possible integer value (using INT_MIN from the `<climits>` header). Then, it iterates through each element of the array and compares it with maxi. If an element is found to be larger than maxi, it updates the value of maxi to that element.
- **Output:** Finally, the program prints out the largest number found in the array.

### Time Complexity:
Overall, the time complexity is O(n) due to the linear iteration over the array to find the minimum element.

### Space Complexity Analysis:
The space complexity is O(n) due to the array created with the size provided by the user. The space required is proportional to the input size.