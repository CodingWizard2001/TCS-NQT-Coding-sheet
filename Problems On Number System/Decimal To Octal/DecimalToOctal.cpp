// Decimal To Octal

#include<iostream>
using namespace std;
int main(){
    int decimal,octal = 0,m = 1;
    cout<<"Enter a decimal number : ";
    cin>>decimal;
    while(decimal != 0){
        int digit = (decimal % 8);
        octal = octal + (digit * m);
        m *= 10;
        decimal /= 8;
    }
    cout<<"In octal will be : "<<octal;
}