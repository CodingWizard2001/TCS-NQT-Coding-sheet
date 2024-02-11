// Prime numbers in a given range

#include<iostream>
using namespace std;
bool isPrime(int num){
    bool flag = true;
    if(num == 1) return false;
    for(int i = 2;i <= (num / 2);i++){
        if(num % i == 0){
            flag = false;
            break;
        }
    }
    return flag;
}
int main(){
    int start,end;
    cout<<"Enter a number where to start : ";
    cin>>start;
    cout<<"Enter a number where to end : ";
    cin>>end;
    for(int i = start;i <= end;i++){
        if(isPrime(i) == true){
            cout<<i<<" ";
        }
    }
}