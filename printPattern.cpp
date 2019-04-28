#include <iostream>

using namespace std;


void printPattern(int n,int i,int j){

    if(i>n){

        return;

    }else if(i<=j&&i>0){

        cout<<i<<" ";

        j=i;

        i = i-5;

    }else{

        cout<<i<<" ";

        j=i;

        i = i+5;

    }

     printPattern(n,i,j);

}

int main(){

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        int i=n,j=n;

        printPattern(n,i,j);

        cout<<"\n";

    }

    return 0;

}