#include <iostream>
using namespace std;

int main(){
    int t;
    cout<<"Enter the no of test cases:";
    cin>>t;
    while(t--){
        int a,b,x;
        cout<<"Enter the numbers:";
        cin>>a>>b;
        cout<<"Calculater\n1.Addition\n2.Subtraction\n3.multiplication\n4.division\nEnter your choice:";
        cin>>x;
        switch(x){
            case 1:
            cout<<"Sum="<<a+b<<endl;
            break;
            case 2:
            cout<<"Difference="<<a-b<<endl;
            break;
            case 3:
            cout<<"Product="<<a*b<<endl;
            break;
            case 4:
            cout<<"Quotient="<<a/b<<endl;
            break;
            default:
            cout<<"Invalid choice:"<<endl;
            break;
        }
    }
    
return 0;
}