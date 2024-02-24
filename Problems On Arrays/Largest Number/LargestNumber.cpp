// Largest Number in an Array

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
    int maxi = INT_MIN;
    for(int i = 0;i < size;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout<<"Maximum number will be : "<<maxi;
}