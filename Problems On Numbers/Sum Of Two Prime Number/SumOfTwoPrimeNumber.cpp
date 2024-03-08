// Given a number n, express the number as a sum of 2 prime numbers.

#include<iostream>
using namespace std;
int prime_Check(int num){
    int store = 0;
    if(num <= 1) return 0;
    for(int i = 2;i < num;i++){
        if(num % i == 0) return 0;
        else store = i;
    }
    return store;
}
bool prime(int num){
    int number = prime_Check(num);
    if(number & (number - 2)) return 1;
    else return 0;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(prime(num)){
        cout<<"Yes can expressed by 2 prime numbers";
    }
    else{
        cout<<"No can't expressed by 2 prime numbers";
    }
}