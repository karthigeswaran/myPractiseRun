#include <iostream>
using namespace std;

int main(){
	int t;
	cout<<"Enter number of test cases: ";
	cin>>t;
	while(t--){
		int n;
		cout<<"enter max number: ";
		cin>>n;
		for(int i=1;i<=n;i++){
			if(i%5==0){
				cout<<i<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
