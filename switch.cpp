#include <iostream>
using namespace std;

int main(){
	int t;
	cout<<"Enter the number of test cases: ";
	cin>>t;
	while(t--){
		int n,x,r=0,sum=0,rev=0,rem=0,large=0;
		cout<<"Operation to be performed: \n1.Sum of digits\n2.Reverse of number\n3.Largest fo digits\nEnter your choice:";
		cin>>x;
		cout<<"Enter a positive integer: ";
		cin>>n;
		switch(x){
			case 1:
				while(n>0){
					r=n%10;
					sum=sum+r;
					n=n/10;
				}
				cout<<"the sum is "<<sum;
				break;
				
			case 2:
				while(n>0){
					r=n%10;
					rev=rev*10+r;
					n=n/10;
				}
				cout<<rev<<"\n";
				break;
				
			case 3:
				while(n>0){
					rem=n%10;
					if(rem>large){
						large=rem;
					}
					n=n/10;
				}
				cout<<large<<"\n";
				break;
				
			default:
				cout<<"Wrong option";
				break;
		}
		cout<<"\n";
	}
	return 0;
}
