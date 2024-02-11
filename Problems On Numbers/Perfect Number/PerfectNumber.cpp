// Check if a number is perfect number

#include<iostream>
using namespace std;
int isPerfect(int num){
    int sum = 0;
    for(int i = 1;i < num;i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int sum = isPerfect(num);
    if(sum == num){
        cout<<num<<" is a perfect number";
    }
    else{
        cout<<num<<" is not a perfect number";
    }
}