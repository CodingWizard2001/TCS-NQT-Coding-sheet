// Insertion Sort

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
    // Insertion Sort Start
    for(int i = 1;i < size;i++){
        int j = i;
        while(j >= 1 && arr[j] < arr[j - 1]){
            swap(arr[j],arr[j - 1]);
            j--;
        }
    }
    // Insertion Sort End
    cout<<endl<<"After sorting : ";
    print(arr,size);
}