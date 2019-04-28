#include <iostream>
using namespace std;

int rev(int n){
    int rem=0,r=0;
    while(n!=0){
        rem=n%10;
        r=r*10+rem;
        n/=10;
    }
    return r;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,sum;
        cin>>a>>b;
        sum=rev(a)+rev(b);
        cout<<rev(sum)<<endl;
    }
    return 0;
}