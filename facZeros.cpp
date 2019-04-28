#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
long long n,i=1,j=1;
cin>>n;
long ct=0;
while(i>0){
i=n/((int)pow(5,j));
ct=ct+i;
j++;
}
cout<<ct<<"\n";
}
return 0;
}
