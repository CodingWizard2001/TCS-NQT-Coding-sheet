# Count frequency of each element in an array

### Description:
This C++ program takes the size of an array as input from the user, then takes input for the elements of the array. After that, it counts the frequency of each element in the array and prints out the element along with its frequency.

### Steps to Solve the Problem:
- **Input Size:** Take the size of the array from the user.
- **Input Elements:** Prompt the user to input the elements of the array one by one.
- **Count Frequencies:** Use an unordered map to count the frequency of each element in the array. Iterate through the array once, updating the counts in the map.
- **Output Frequencies:** Iterate through the map and print out each element along with its frequency.

### Time Complexity:
The dominant operation is counting frequencies, so the overall time complexity is O(n), iterating through the array once to count frequencies using an unordered map

### Space Complexity:
the overall space complexity is O(n).