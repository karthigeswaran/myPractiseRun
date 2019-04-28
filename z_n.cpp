#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long ct=0;
        for(long i=n;i>4;i--){
                for(long j=i;j%5==0;j/=5){
                    ct++;
                }  
        }
        cout<<ct<<"\n";
    }
    return 0;
}