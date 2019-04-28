#include <iostream>
using namespace std;

int main(){
    int t;
    cout<<"enter no. of test case:";
    cin>>t;
    while(t--){
        int l,i,large=0;
        cout<<"Enter length of array:";
        cin>>l;
        int *arr= new int[l];
        cout<<"Enter the elements of the array:";
        for(i=0;i<l;i++){
            cin>>arr[i];
            if(large<arr[i]){
                large=arr[i];
            }
        }
        cout<<"Largest element is "<<large<<endl;
        delete[] arr;
    }
    return 0;
}