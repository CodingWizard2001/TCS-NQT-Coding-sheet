// Bubble Sort

#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
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
    cout<<"Before sorting : ";
    print(arr,size);
    for(int i = 0;i < size - 1;i++){
        for(int j = 0;j < (size - i - 1);j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<endl<<"After sorting : ";
    print(arr,size);
}