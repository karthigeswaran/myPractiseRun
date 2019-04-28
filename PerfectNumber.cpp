#include <iostream>
using namespace std;

int main(){
	int t;
	cout<<"Enter no. of test cases:";
	cin>>t;
	while(t--){
	    int n,s=0;
	    cout<<"Enter number:";
		cin>>n;
	    for(int i=1;i<n;i++){
	    	if(n%i==0){
	    		s=s+i;
			}
		}
		if(s==n){
			cout<<"Perfect number\n";
		}else{
			cout<<"Not a perfect number\n";
		}
	}
	return 0;
}
