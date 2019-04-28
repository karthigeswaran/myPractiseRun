#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string:"<<endl;
    getline(cin,str);
    std::string::reverse_iterator i;
    for(i=str.rbegin();i!=str.rend();i++){
        cout<<*i;
    }
    cout<<endl;
    return 0;
}