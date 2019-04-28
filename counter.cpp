#include <iostream>
#include <string>
using namespace std;

int main(){
		string str;
		cout<<"Enter the string:";
		getline(cin,str);
		int i,v,c,d,w;
		v=c=d=w=0;
		for(i=0;str[i]!='\0';i++){
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
				++v;
			}else if((str[i]>='b'&&str[i]<='z')||(str[i]>='B'&&str[i]<='Z')){
				++c;
			}else if(str[i]>='0'&&str[i]<='9'){
				++d;
			}if(str[i]==' '){
				++w;
			}
		}
		cout<<"Vowels="<<v<<"\n";
		cout<<"Consonents="<<c<<"\n";
		cout<<"Digits="<<d<<"\n";
		cout<<"White spaces="<<w<<"\n";
	return 0;
}
