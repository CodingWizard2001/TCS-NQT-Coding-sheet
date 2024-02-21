// Binary To Octal


#include<iostream>
using namespace std;
int main(){
    int binary,decimal = 0,m = 1;
    cout<<"Enter a binary number : ";
    cin>>binary;
    while(binary != 0){
        int digit = (binary % 10);
        decimal = decimal + (digit * m);
        m *= 2;
        binary /= 10;
    }
    int octal = 0;
    m = 1;
    while(decimal != 0){
        int digit = (decimal % 8);
        octal = octal + (digit * m);
        m *= 10;
        decimal /= 8;
    }
    cout<<"In octal it will be : "<<octal;
}