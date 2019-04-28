#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--!=0){
		long long n1,n2,i,j;
		cin>>n1>>n2;
		bool *arr=new bool[n2+1];
		for(i=0;i<=n2;i++){
			arr[i]=true;
		}
		arr[0]=false;arr[1]=false;
		for(i=2;i<=sqrt(n2+1);i++){
			if(arr[i]==true){
				for(j=(n1/i<2?2:n1/i);i*j<=n2;j++){
					arr[i*j]=false;
				}
			}
		}
		for(i=n1;i<=n2;i++){
			if(arr[i]==true){
				cout<<i<<"\n";
			}
		}
	    cout<<"\n";
		delete[] arr;
	}
	return 0;
}