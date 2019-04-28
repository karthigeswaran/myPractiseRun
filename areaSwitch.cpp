#include <iostream>
using namespace std;

int main(){
	int t;
	cout<<"Enter no. of test cases: ";
	cin>>t;
	while(t--){
		float a,s1,s2;
		int x;
		cout<<"Options \n1.Square\n2.Rectangle\n3.circle\n4.triangle\nEnter your option: ";
		cin>>x;
		switch(x){
			case 1:
				cout<<"Area of square\nEnter side(cm): ";
				cin>>s1;
				a=s1*s1;
				cout<<"Area(sq.cm)= "<<a<<"\n";
				break;
			
			case 2:
				cout<<"Area of rectagle\nEnter Length(cm): ";
				cin>>s1;
				cout<<"Enter breadth(cm): ";
				cin>>s2;
				a=s1*s2;
				cout<<"Area(sq.cm)= "<<a<<"\n";
				break;
				
			case 3:
				cout<<"Area of circle\nEnter radius(cm): ";
				cin>>s1;
				a=(22/7)*s1*s1;
				cout<<"Area(sq.cm)= "<<a<<"\n";
				break;
				
			case 4:
				cout<<"Area of Triangle\nEnter Base(cm): ";
				cin>>s1;
				cout<<"Enter height(cm): ";
				cin>>s2;
				a=(0.5)*s1*s2;
				cout<<"Area(sq.cm)= "<<a<<"\n";
				break;
				
			default:
				cout<<"Invalid option\n";
				break;
			
		}
	}
	return 0;
}
