// Check if a number is palindrome or not

#include<iostream>
using namespace std;
int isPalindrome(int num){
    int sum = 0;
    while(num != 0){
        int digit = (num % 10);
        sum = (sum * 10) + digit;
        num /= 10;
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int n = isPalindrome(num);
    if(n == num){
        cout<<num<<" is a palindrome number";
    }
    else{
        cout<<num<<" is not a palindrome number";
    }
}