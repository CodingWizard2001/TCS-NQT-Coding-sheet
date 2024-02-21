// Binary To Decimal

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
    cout<<"In decimal it will be : "<<decimal;
}