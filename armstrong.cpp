#include <iostream>
using namespace std;

int main(){
	int t;
	cout<<"Enter no. of test cases: ";
	cin>>t;
	while(t--){
		int i,r,s,a,n;
		cout<<"Enter the number: ";
		cin>>n;
		cout<<"The armstrong numbers are ";
		for(i=0;i<n;i++){
			a=i;
			s=0;
			while(a>0){
				r=a%10;
				s=s+r*r*r;
				a=a/10;
			}
			if(s==i){
				cout<<i<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
