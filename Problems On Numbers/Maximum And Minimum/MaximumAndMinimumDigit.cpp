// Maximum and Minimum digit in a number

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int maxi = INT_MIN,mini = INT_MAX;
    while(num != 0){
        int digit = (num % 10);
        if(digit > maxi) maxi = digit;
        if(digit < mini) mini = digit;
        num /= 10;
    }
    cout<<"Maximum digit will be : "<<maxi<<" and minimum will be : "<<mini;
}