// Octal To Binary

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
    int binary = 0;
    m = 1;
    while(decimal != 0){
        int digit = (decimal % 2);
        binary = binary + (digit * m);
        m *= 10;
        decimal /= 2;
    }
    cout<<"In binary : "<<binary;
}