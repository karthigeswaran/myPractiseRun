#include <iostream>
using namespace std;

int prime(int n){
	int i,c=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==2){
		return true;
	}else{
		return false;
	}
}
int main(){
	int t;
	cout<<"Enter number of test cases:";
	cin>>t;
	while(t--){
		int n;
		cout<<"Enter max number: ";
		cin>>n;
		for(int i=1;i<=n;i++){
			if(prime(i)==true){
				cout<<i<<" ";
			}
		}
		cout<<"\n";
	}
    return 0;
}
