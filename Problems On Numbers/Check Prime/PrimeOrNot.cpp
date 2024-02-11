// Check if a number is prime or not

#include<iostream>
using namespace std;
bool isPrime(int num){
    bool flag = true;
    for(int i = 2;i <= (num / 2);i++){
        if(num % i == 0){
            flag = false;
            break;
        }
    }
    return flag;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(isPrime(num) == true){
        cout<<num<<" is a prime number";
    }
    else{
        cout<<num<<" is not a prime number";
    }
}