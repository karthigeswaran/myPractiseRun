#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n){
	int i;
	bool flag=true;
	if(n==1){
			return false;
		}
	for (i=2;i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	return flag;
}
int main(){
	int t;
	cout<<"enter number of test cases: ";
	cin>>t;
	while(t--){
		int n;
		cout<<"enter a positive integer: ";
		cin>>n;
		cout<<(prime(n)?"Prime number\n":"Not a prime number\n");
	}
	return 0;
}
