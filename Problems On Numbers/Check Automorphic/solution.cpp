// Check if a Number is Automorphic

#include<iostream>
using namespace std;

bool isAutomorphic(int num){
    int mul = (num * num);
    int result = (mul % 100);
    return (result == num);
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(isAutomorphic(num) == true){
        cout<<num<<" is automorphic";
    }
    else{
        cout<<num<<" is not automorphic";
    }
}