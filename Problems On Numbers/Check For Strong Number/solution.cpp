// Check if a number is a strong number or not

#include<iostream>
using namespace std;
bool isStrong(int num){
    int number = 0,n = num;
    while(n != 0){
        int digit = (n % 10);
        int fact = 1;
        while(digit != 0){
            fact *= digit;
            digit--;
        }
        number += fact;
        n /= 10;
    }
    return (number == num);
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(isStrong(num) == true){
        cout<<num<<" is a strong number";
    }
    else{
        cout<<num<<" is not a strong number";
    }
}