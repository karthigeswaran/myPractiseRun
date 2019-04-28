	#include <iostream>
	#include <cmath>
	using namespace std;

	int main() {
		int t;
		cin>>t;
		while(t--){
			int n1,n2,i,j,ct;
			cin>>n1>>n2;
			if(n1==1){
				n1=2;
			}
			for(i=n1;i<=n2;i++){
				ct=0;
				for(j=1;j<=sqrt(i);j++){
						if(i%j==0){
							ct++;
						}
					}
					if(ct==1){
						cout<<i<<endl;
					}
				}
			cout<<endl;
		}
		return 0;
	}