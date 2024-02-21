// Write a C++ program to calculate power of a number

#include<iostream>
using namespace std;
int main(){
    int num,power,result = 1;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Enter power : ";
    cin>>power;
    if(power == 0) result = 1;
    if(power == 1) result = num;
    while(power >= 1){
        result *= num;
        power--;
    }
    cout<<"Result will be : "<<result;
}