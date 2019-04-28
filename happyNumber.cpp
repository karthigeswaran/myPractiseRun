#include <iostream>
using namespace std;

bool testFor1(int n,int i){
    int sum=0,temp;
    while(n>0){
        temp=n%10;
        sum=sum+(temp*temp);
        n/=10;
    }
    if(sum==1) return 1;
    else if(i>1000) return 0;
    else{
        return testFor1(sum,i+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag=0;
        while(flag!=1){
            n++;
            flag=testFor1(n,0);
        }
        cout<<n<<"\n";
    }
    return 0;
}
