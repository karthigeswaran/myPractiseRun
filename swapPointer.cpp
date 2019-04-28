#include <iostream>
using namespace std;

int main(){
	int t;
	cout<<"Enter the number of test cases:";
	cin>>t;
	while(t--){
		int n1,n2,*x,*y,temp;
		cout<<"Enter the numbers: ";
		cin>>n1>>n2;
		x=&n1;
		y=&n2;
		cout<<"Before swapping:"<<n1<<" "<<n2<<"\n";
		temp=*x;
		*x=*y;
		*y=temp;
		cout<<"After swapping:"<<n1<<" "<<n2<<"\n";
	}
	return 0;
}
