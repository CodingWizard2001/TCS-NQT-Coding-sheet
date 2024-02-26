// Reverse a given array

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    if(size <= 0){
        cout<<"Invalid array size";
    }
    int arr[size];
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        arr[i] = x;
    }
    int i = 0, j = size - 1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout<<"Reversing array: ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
}