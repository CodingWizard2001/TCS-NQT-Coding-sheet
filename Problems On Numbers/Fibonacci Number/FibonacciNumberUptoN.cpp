// Print Fibonacci upto Nth Term

#include<iostream>
using namespace std;
void FibonacciSeries(int num){
    int a = 0,b = 1;
    cout<<"Fibonacci series will be : "<<a<<" "<<b<<" ";
    for(int i = 2;i < num;i++){
        int c = (a + b);
        a = b;
        b = c;
        cout<<b<<" ";
    }
}
int main(){
    int term;
    cout<<"Enter nth term : ";
    cin>>term;
    FibonacciSeries(term);
}