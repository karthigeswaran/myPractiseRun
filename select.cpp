#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long n,count=0,i;
        cin>>n;
        bool *arr=new bool[n];
        for(i=0;i<n;i++) arr[i]=true;
        i=0;
        while(count<n-2){
           if(arr[i]==true){
               arr[i]=false;
               count++;
               i=(i+2)%n;
           }
           else{
               i=(i+1)%n;
           }
        }
        i=0;
        while(i<n){
            if(arr[i]==true){
                break;
            }            
        }
        cout<<i+1;
        delete[] arr;
    }
    return 0;
}
