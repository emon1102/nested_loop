/*
I want to print :
A 
B B 
C C C 
D D D D 

*/
#include<iostream>
using namespace std; 
int main (){
    int N;
    cout<<"Enter Your N : ";
    cin>>N;
    for (int i = 0 ; i < N ; i ++){
        for (int j = 0 ; j <= i ; j ++){
            cout<<char(i+65)<<" ";
        }
        cout<<"\n";
    }

    return 0 ;
}
