#include <iostream>
using namespace std;

int euclidGcd(int a,int b){
    return b == 0? a:euclidGcd(b,a%b);
}
int main(){
    int a,b;
    cout<<"Enter two positive integers: ";
    cin>>a>>b;
    cout<<"GCD = "<<euclidGcd(a,b);
    return 0;
}