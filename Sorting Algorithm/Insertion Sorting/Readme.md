# Selection Sorting


### Description:
This C++ program takes the size of an array as input from the user, then takes input for the elements of the array. After that, it sorts the array using the *Selection Sort* algorithm. Finally, it prints the sorted array.

### Solution

```cpp

    for(int i = 1;i < size;i++){
        int j = i;
        while(j >= 1 && arr[j] < arr[j - 1]){
            swap(arr[j],arr[j - 1]);
            j--;
        }
    }

```

### Steps to Solve the Problem:
- **Input the size of the array:** Ask the user to input the size of the array.
- **Input the elements of the array:** Ask the user to input the elements of the array.
- **Print the array before sorting:** Print the array before applying the sorting algorithm.
- **Insertion Sort Algorithm:**
    - Start traversing the array from the second element (index 1) to the last element.
    - For each element at index i, compare it with the elements before it (from index i-1 to 0).
    - Swap the current element with the elements before it until it's in the correct sorted position.
- **Print the array after sorting:** Print the array after applying the sorting algorithm.

### Time Complexity:
The overall time complexity is O(n^2) in average & worst case but in best case it will be O(n).

### Space Complexity:
The overall space complexity is O(1).


>[!Important]
> Insertion Sort is stable Sort
