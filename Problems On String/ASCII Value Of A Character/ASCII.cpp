// Find the ASCII value of a character

#include<iostream>
#include<string>
using namespace std;
int getASCII(char ch){
    return int(ch);
}
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    cout<<"The ASCII value of '"<<ch<<"' is : "<<getASCII(ch);
}