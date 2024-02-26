// Calculate sum of the elements of the array

#include<iostream>
using namespace std;
int SumArray(int arr[],int size){
    int sum = 0;
    for(int i = 0;i < size;i++){
        sum += arr[i];
    }
    return sum;
}
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
    cout<<"Sum of the elements of the array will be : "<<SumArray(arr,size);
}