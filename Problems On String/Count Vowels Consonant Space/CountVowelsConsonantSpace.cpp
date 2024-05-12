// Given a string, write a program to count the number of vowels, consonants, and spaces in that string.


#include<iostream>
#include<string>
using namespace std;
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
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    Count(s);
}