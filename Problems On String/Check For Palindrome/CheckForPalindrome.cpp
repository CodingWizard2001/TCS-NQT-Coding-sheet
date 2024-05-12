// Given a string, check if the string is palindrome or not.  A string is said to be palindrome if the reverse of the string is the same as the string.


#include<iostream>
#include<string>
using namespace std;
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
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    if(isPalindrome(s)) cout<<s<<" is a palindrome string";
    else cout<<s<<" is not a palindrome string";
}