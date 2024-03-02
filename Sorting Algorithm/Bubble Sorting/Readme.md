# Bubble Sort

### Description:
This C++ program takes the size of an array as input from the user, and then takes input for the elements of the array. After that, it sorts the array using the Bubble Sort algorithm. Finally, it prints the sorted array.

### Solution

```cpp

for(int i = 0;i < size - 1;i++){
    for(int j = 0;j < (size - i - 1);j++){
        if(arr[j] > arr[j + 1]){
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

```

### Steps to Solve the Problem:
- **Input Size:** Take the array size from the user.
- **Input Elements:** Prompt the user to input the elements of the array one by one.
- **Bubble Sort:**
    - Iterate through the array from index 0 to size - 2.
    - In each iteration, iterate through the unsorted part of the array and swap adjacent elements if they are in the wrong order.
- **Output Sorted Array:** Print the sorted array.

### Time Complexity:
The overall time complexity is O(n^2) in average & worst case but in the best case it will be O(n).

### Space Complexity:
The overall space complexity is O(1).

>[!Important]
> Bubble Sort is stable Sort
