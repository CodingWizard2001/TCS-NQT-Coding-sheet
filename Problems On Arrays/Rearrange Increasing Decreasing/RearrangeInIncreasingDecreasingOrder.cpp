// Rearrange array in increasing-decreasing order

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>arr;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    for(int i = 0;i < (size / 2);i++){
        cout<<arr[i]<<" ";
    }
    for(int i = (size - 1);i >= (size / 2);i--){
        cout<<arr[i]<<" ";
    }
}