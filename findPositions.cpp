#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int i=log(n)/log(2);
        cout<<pow(2,i)<<"\n";
    }
    return 0;
}