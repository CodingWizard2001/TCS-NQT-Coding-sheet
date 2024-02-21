// Octal To Decimal

#include<iostream>
using namespace std;
int main(){
    int octal,decimal = 0,m = 1;
    cout<<"Enter a octal number : ";
    cin>>octal;
    while(octal != 0){
        int digit = (octal % 10);
        decimal = decimal + (digit * m);
        m *= 8;
        octal /= 10;
    }
    cout<<"In decimal it will be : "<<decimal;
}