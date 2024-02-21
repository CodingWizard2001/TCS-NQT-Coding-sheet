// LCM of two numbers

#include<iostream>
using namespace std;
int main(){
    int num1,num2,gcd = 1,lcm = 1;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    int mini = min(num1,num2);
    for(int i = 2;i <= mini;i++){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }
    lcm = (gcd * (num1 / gcd) * (num2 / gcd));
    cout<<"LCM of "<<num1<<" & "<<num2<<" numbers are : "<<lcm;
}