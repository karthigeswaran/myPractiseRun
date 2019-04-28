#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Max number: ";
    cin>>n;
    int *arr=new int[n+1];
    for(i=0;i<=n;i++){
        arr[i]=1;
    }
    arr[0]=0;
    arr[1]=0;
    for(i=2;i<sqrt(n);i++){
        if(arr[i]==1){
            for(j=2;i*j<n;j++){
                arr[i*j]=0;
            }
        }
    }
    cout<<"Prime numbers are:\n";
    for(i=0;i<n;i++){
        if(arr[i]==1){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
    delete[] arr;
    return 0;
}