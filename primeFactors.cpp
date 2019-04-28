#include <iostream>
#include <cmath>
using namespace std;

void primefac(int n){
    int i,ct;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            ct=0;
            while(n%i==0){
                n=n/i;
                ct++;
            }
            cout<<i<<"^"<<ct<<" ";
        }
    }
    if(n!=1) cout<<n<<"^1"<<" ";
    cout<<endl; 
    return;
}
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    cout<<"The prime factors are:\n";
    primefac(n);
    return 0;
}