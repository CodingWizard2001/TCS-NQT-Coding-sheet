// Selection Sort

#include<iostream>
#include<climits>
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
    // Selection Sort Start
    for(int i = 0;i < size - 1;i++){
        int mini = INT_MAX;
        int minIdx = -1;
        for(int j = i;j < size;j++){
            if(arr[j] < mini){
                mini = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    // Selection Sort End
    cout<<endl<<"After sorting : ";
    print(arr,size);
}