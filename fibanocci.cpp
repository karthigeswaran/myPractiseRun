#include <iostream>
using namespace std;

int main(){
	int t;
	cout<<"Enter number of test cases:";
	cin>>t;
	while(t--){
		int n;
		cout<<"Enter number:";
		cin>>n;
		cout<<"fibanocci series:";
		int sum=0,a=1,b=0;
		for(int i=0;i<n;i++){
			cout<<sum<<" ";
			sum=a+b;
			a=b;
			b=sum;
		}
		cout<<"\n";
	}
	return 0;
}
