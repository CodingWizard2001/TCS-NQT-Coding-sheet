// Program to find sum of GP Series

#include<iostream>
using namespace std;
float sumOfGP(float firstTerm,float commonRatio,int noOfTerms){
    float sum = 0;
    for(int i = 0;i < noOfTerms;i++){
        sum = sum  + firstTerm;
        firstTerm = firstTerm * commonRatio;
    }
    return sum;
}
int main(){
    float firstTerm,commonRatio;
    int noOfTerms;
    cout<<"Enter the first term : ";
    cin>>firstTerm;
    cout<<"Enter the common ratio : ";
    cin>>commonRatio;
    cout<<"Enter no. of terms : ";
    cin>>noOfTerms;
    cout<<"Sum will be : "<<sumOfGP(firstTerm,commonRatio,noOfTerms);
}