# Check if a given string is palindrome or not

### Description:
This C++ program takes a string as input from the user, then check whether iit is palindrome or not.

### Solution

```cpp

bool isPalindrome(string s){
    int left = 0,right = s.length() - 1;
    while(left < right){
        if(!isalnum(s[left])) left++;
        else if(!isalnum(s[right])) right--;
        else if(islower(s[left]) != islower(s[right])) return false;
        else{
            left++;
            right--;
        }
    }
    return true; 
}

```

### Steps to Solve the Problem:
- **Input Size:** Take a string from the user.
- **Input Elements:** Prompt the user to give input.
- **Palindrome Check:**
    - Compare characters from the start and end of the string.
    - Ignore non-alphanumeric characters.
    - Check if characters are equal ignoring case.
- **Output Result:** Display whether the string is a palindrome or not.

### Time Complexity:
The overall time complexity is O(n).

### Space Complexity:
The overall space complexity is O(1).