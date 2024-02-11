// Find all Palindrome numbers in a given range

#include<iostream>
using namespace std;
bool isPalindrome(int num){
    int n = num,sum = 0;
    while(n != 0){
        int digit = (n % 10);
        sum = (sum * 10) + digit;
        n /= 10;
    }
    if(sum == num) return true;
    else return false;
}
int main(){
    int start,end;
    cout<<"Enter a number where to start : ";
    cin>>start;
    cout<<"Enter a number where to end : ";
    cin>>end;
    cout<<"Palindrome number : ";
    for(int i = start;i <= end;i++){
        if(isPalindrome(i) == true){
            cout<<i<<" ";
        }
    }
}