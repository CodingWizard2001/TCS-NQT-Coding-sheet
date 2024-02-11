// Check if a number is armstrong number of not

#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int num){
    int sum = 0,n = num,count = 0;
    while(n != 0){
        count++;
        n /= 10;
    }
    n = num;
    while(n != 0){
        int digit = (n % 10);
        sum = sum + pow(digit,count);
        n /= 10;
    }
    if(num == sum) return true;
    else return false;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(isArmstrong(num) == true){
        cout<<num<<" is an armstrong number";
    }
    else{
        cout<<num<<" is not an armstrong number";
    }
}