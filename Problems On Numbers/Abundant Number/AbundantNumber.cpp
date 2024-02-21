// Check if the number is abundant number or not

#include<iostream>
using namespace std;
bool isAbundant(int num){
    int sum = 0;
    cout<<"Factors are : ";
    for(int i = 1;i <= num;i++){
        if(num % i == 0){
            cout<<i<<" ";
            sum += i;
        }
    }
    return (sum > num);
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(isAbundant(num) == true){
        cout<<endl<<num<<" is a abundant number";
    }
    else{
        cout<<endl<<num<<" is not a abundant number";
    }
}