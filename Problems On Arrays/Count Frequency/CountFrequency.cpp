// Count frequency of each element in an array

#include<bits/stdc++.h>
using namespace std;
void Frequency(int arr[],int size){
    unordered_map<int,int>map;
    for(int i = 0;i < size;i++){
        map[arr[i]]++;
    }
    for(auto x : map){
        cout<<x.first<<" "<<x.second<<endl;
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
    Frequency(arr,size);
}