# Selection Sorting


### Description:
This C++ program takes the size of an array as input from the user, then takes input for the elements of the array. After that, it sorts the array using the *Selection Sort* algorithm. Finally, it prints the sorted array.

### Solution

```cpp

    for(int i = 0;i < size - 1;i++){
        int mini = INT_MAX;
        int minIdx = -1;
        for(int j = i;j < size;j++){
            if(arr[j] < mini){
                mini = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }

```

### Steps to Solve the Problem:
- **Input the size of the array:** Ask the user to input the size of the array.
- **Input the elements of the array:** Ask the user to input the elements of the array.
- **Print the array before sorting:** Print the array before applying the sorting algorithm.
- **Selection Sort Algorithm:**
    - Start traversing the array from the first element to the second last element (index 0 to size - 2).
    - Within each traversal, find the minimum element from the unsorted part of the array.
    - Swap the minimum element with the current element.
    - Continue this process until the entire array is sorted.
- **Print the array after sorting:** Print the array after applying the sorting algorithm.

### Time Complexity:
The overall time complexity is O(n^2) in best,average & worst case.

### Space Complexity:
The overall space complexity is O(1).