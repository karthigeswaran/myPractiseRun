#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cout<<"enter no. of test cases: ";
	cin>>t;
	while(t--){
		 char str[80],ser[10];
		 int count1=0,count2=0,i,j,flag;
		 cout<<"Enter a string: ";
		 cin>>str;
		 cout<<"Enter a search string: ";
		 cin>>ser;
		 while(str[count1]!='\0'){
		 	count1++;
		 }
		 while(ser[count2]!='\0'){
		 	count2++;
		 }
		 for(i=0;i<=count1-count2;i++){
		 	for(j=1;j<i+count2;j++){
		 		flag=1;
		 		if(str[j]!=ser[j-1]){
		 			flag=0;
		 			break;
				 }
			 }
			 if(flag==1){
			 	break;
			 }
		 }
		 if(flag==1){
		 	cout<<"Search successfull\n";
		 }
		 else{
		 	cout<<"search unsuccessfull\n";
		 }
	}
	return 0;
}
