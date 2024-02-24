// Smallest Number in an Array

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        arr[i] = x;
    }
    int mini = INT_MAX;
    for(int i = 0;i < size;i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    cout<<"Minimum number will be : "<<mini;
}