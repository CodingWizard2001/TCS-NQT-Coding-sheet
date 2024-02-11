// Find Sum of AP Series

#include<iostream>
using namespace std;
int main(){
    int start,end,step,sum = 0;
    cout<<"Enter a number from where to start : ";
    cin>>start;
    cout<<"Enter a number from where to end : ";
    cin>>end;
    cout<<"Enter no. of steps : ";
    cin>>step;
    for(int i = start;i < end;i += step){
        sum += i;
    }
    cout<<"Sum will be : "<<sum;
}