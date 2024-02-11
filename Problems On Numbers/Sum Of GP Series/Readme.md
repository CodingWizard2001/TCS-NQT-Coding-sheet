# Sum of Geometric Progression (GP) Series


### Description
The provided code calculates the sum of a Geometric Progression (GP) series given the first term, common ratio, and number of terms. In a Geometric Progression, each term is obtained by multiplying the previous term by a fixed, non-zero number called the common ratio.

### Steps to Solve the Problem
 - **Input Parameters:** Prompt the user to enter the first term `(firstTerm)`, common ratio `(commonRatio)`, and number of terms `(noOfTerms)` for the GP series.
 - **Read Inputs:** Read the input values for firstTerm, commonRatio, and noOfTerms from the user.
 - **Calculate Sum:** Initialize a variable sum to 0. Use a for loop to iterate through each term of the GP series. In each iteration, add the current term (which is the firstTerm multiplied by the common ratio raised to the power of the term index) to the sum.
 - **Output:** Print the calculated sum of the GP series.

### Time Complexity
The time complexity of this solution is O(N), where N is the number of terms in the GP series.

### Space Complexity
The space complexity of this solution is O(1) as it requires only a constant amount of extra memory regardless of the size of the GP series.