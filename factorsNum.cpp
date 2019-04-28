#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter Number: ";
    cin>>n;
    int *arr= new int[n+1];
    for(i=1;i<=n;i++){
        arr[i]=0;        
    }
    for(i=1;i<=sqrt(n);i++){
        if(n%i==0){
            arr[i]=1;
            if(i!=sqrt(n)){
                arr[n/i]=1;
            }
        }
    }
    for(i=1;i<=n;i++){
        if(arr[i]==1){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}