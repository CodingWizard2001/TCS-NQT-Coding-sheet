//  Find permutations in which n people can occupy r seats in a classroom.

#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1;i <= n;i++) fact *= i;
    return fact;
}
int main(){
    int peopleNo,seatNo;
    cout<<"Enter no. of people : ";
    cin>>peopleNo;
    cout<<"Enter no. of seat : ";
    cin>>seatNo;
    if(peopleNo < 0 && seatNo < 0 && peopleNo < seatNo){
        cout<<"People can seat : "<<factorial(peopleNo) / factorial(peopleNo - seatNo);
    }
    else{
        cout<<"Invalid input";
    }
}