#include <iostream>
#include <string>
using namespace std;

int main(){
    string str,str1;
    cout<<"Enter lower case string:"<<endl;
    getline(cin,str);
    std::string::iterator i;
    for(i=str.begin();i!=str.end();i++){
        if(*i>=96&&*i<=123)  
        str1.push_back((*i-32));
    }
    cout<<"upper case sentence"<<endl<<str1<<endl;
    return 0;
}