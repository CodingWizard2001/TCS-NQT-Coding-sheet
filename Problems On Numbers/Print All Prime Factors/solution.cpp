// Print all prime factors of the given number

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Factors are : ";
    for(int i = 2;num > 1;i++){
        if(num % i == 0){
            while(num % i == 0){
                cout<<i<<" ";
                num /= i;
            }
        }
    }
}