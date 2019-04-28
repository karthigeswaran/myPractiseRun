#include <iostream>
#include <string>
using namespace std;

int main(){
    int l,i,j;
    cout<<"Enter number of strings:";
    cin>>l;
    std::string* p= new std::string[l];
    cout<<"Enter the strings"<<endl;
    for(i=0;i<=l;i++)
    getline(cin,p[i]);
    for(i=0;i<=l;i++){
        for(j=i;j<=l+1;j++){
            if(p[i].compare(p[j])>0){
                p[i].swap(p[j]);
            }
        }
    }
    for(i=0;i<l;i++){
        cout<<p[i]<<endl;
    }

}