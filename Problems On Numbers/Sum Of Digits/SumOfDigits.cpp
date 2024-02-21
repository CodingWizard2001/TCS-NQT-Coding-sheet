// Sum of digits of a number

#include<iostream>
using namespace std;
int main(){
    int num,sum = 0;
    cout<<"Enter a number : ";
    cin>>num;
    int n = num;
    while(n != 0){
        int digit = (n % 10);
        sum += digit;
        n /= 10;
    }
    cout<<"Sum of digits of a "<<num<<" will be : "<<sum;
}