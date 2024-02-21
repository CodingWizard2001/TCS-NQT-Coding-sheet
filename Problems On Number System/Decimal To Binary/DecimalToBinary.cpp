// Convert Decimal To Octal

#include<iostream>
using namespace std;
int main(){
    int decimal,binary = 0,m = 1;
    cout<<"Enter a decimal number : ";
    cin>>decimal;
    while(decimal != 0){
        int digit = (decimal % 2);
        binary = binary + (digit * m);
        m *= 10;
        decimal /= 2;
    }
    cout<<"In binary it will be : "<<binary;
}