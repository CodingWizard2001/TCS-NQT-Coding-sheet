// Adding two fractional numbers

#include<iostream>
using namespace std;
float AddTwo(int num1,int num2,int den1,int den2){
    float number1 = (float)num1 / (float)den1;
    float number2 = (float)num2 / (float)den2;
    return number1 + number2;
}
int main(){
    int num1,den1,num2,den2;
    cout<<"Enter upper part number : ";
    cin>>num1;
    cout<<"Enter lower part number : ";
    cin>>den1;
    cout<<"Enter upper part number : ";
    cin>>num2;
    cout<<"Enter lower part number : ";
    cin>>den2;
    cout<<"Add will be : "<<AddTwo(num1,num2,den1,den2);
}