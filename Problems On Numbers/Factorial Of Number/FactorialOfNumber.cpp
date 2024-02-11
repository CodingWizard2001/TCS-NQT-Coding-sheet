// Factorial of a number


#include<iostream>
using namespace std;
int Factorial(int num){
    int fact = 1;
    for(int i = 2;i <= num;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Factorial of "<<num<<" will be : "<<Factorial(num);
}