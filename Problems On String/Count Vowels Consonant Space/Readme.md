# Vowel, Consonant, and Space Counter

### Description:
This C++ program counts the number of vowels, consonants, and spaces in a given string.

### Solution

```cpp

void Count(string s){
    int noOfVowels = 0,noOfConsonant = 0,noOfSpace = 0;
    for(int i = 0;i < s.length();i++){
        if(s[i] == ' ') noOfSpace++;
        else if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == '0' || tolower(s[i]) == 'u') noOfVowels++;
        else noOfConsonant++;
    }
    cout<<"No. of Vowels : "<<noOfVowels<<endl;
    cout<<"No. of Spaces : "<<noOfSpace<<endl;
    cout<<"No. of Consonants : "<<noOfConsonant;
}

```

### Steps to Solve the Problem:
- **Input Size:** Take a string from the user.
- **Input Elements:** Prompt the user to give input.
- **Counting:**
    - Iterate through each character in the string.
    - Check if the character is a vowel, consonant, or space.
    - Increment the corresponding counter.
- **Output Result:** Display the counts of vowels, consonants, and spaces.

### Time Complexity:
The overall time complexity is O(n).

### Space Complexity:
The overall space complexity is O(1).