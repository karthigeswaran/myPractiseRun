#include <iostream>
using namespace std;

void num(int *a,int *b){
    cout<<"Sum of numbers:"<<(*a)+(*b)<<endl;
    cout<<"Product of numbers:"<<(*a)*(*b)<<endl;
    cout<<"Difference of numbers:"<<(*a)-(*b)<<endl;
return;
}
int main(){
    int t;
    cout<<"Enter number of test cases:";
    cin>>t;
    while(t--){
        int a,b;
        cout<<"Enter the numbers: ";
        cin>>a>>b;
        num(&a,&b);
    }
return 0;
}