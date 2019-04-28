#include<iostream>
using namespace std;

int factorial(int n){
	if(n==1){
		return 1;
	}
	int	factor=n*factorial(n-1);
	return factor;
}
int main(){
	int t;
	cout<<"Enter the number of test cases: ";
	cin>>t;
	while(t--){
		int n;
		cout<<"Enter the number: ";
		cin>>n;
		int factor=factorial(n);
		cout<<"the factorial is: "<<factor<<"\n";
	} 
	return 0;
}

