// Check if a number is Harshad number

#include<iostream>
using namespace std;
int main(){
    int num,n = 0,sum = 0;
    cout<<"Enter a number : ";
    cin>>num;
    n = num;
    while(n != 0){
        int digit = (n % 10);
        sum += digit;
        n /= 10;
    }
    if(num % sum == 0){
        cout<<num<<" is a harshad number";
    }
    else{
        cout<<num<<" is not a harshad number";
    }
}