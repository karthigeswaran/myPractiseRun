#include <iostream>
using namespace std;

void matadd(int **mat1,int **mat2,int r1,int c1){
	int i,j,sum;
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			sum=mat1[i][j]+mat2[i][j];
			cout<<sum<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	int t;
	cout<<"Enter the number of test cases: ";
	cin>>t;
	while(t--){
		int i,j,r1,c1,r2,c2;
		cout<<"Enter matrix 1 row and column size:";
		cin>>r1>>c1;
		cout<<"Enter matrix 2 row and column size:";
		cin>>r2>>c2;
		if(r1==r1&&c1==c2){
		int **mat1=new int*[r1];
		for(i=0;i<r1;i++){
			mat1[i]=new int[c1];
		}
		int **mat2=new int*[r2];
		for(i=0;i<r2;i++){
			mat2[i]=new int[c2];
		}
		cout<<"Enter matrix 1 elements: ";
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				cin>>mat1[i][j];
			}
		}
		cout<<"Enter matrix 2 elements: ";
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				cin>>mat2[i][j];
			}
		}
		matadd(mat1,mat2,r1,c1);
		for(i=0;i<r1;i++){
			delete[] mat1[i];
		}
		delete[] mat1;
		for(i=0;i<r2;i++){
			delete[] mat2[i];
		}
		delete[] mat2;
		}
		else{
			cout<<"Addition not possible\n";
		}
	}
	return 0;
}
