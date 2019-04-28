#include <iostream>
using namespace std;

int main(){
	int t;
	cout<<"Enter the no of test cases: ";
	cin>>t;
	while(t--){
		int i,j,k,r1,r2,c1,c2;
		cout<<"Enter the matrix 1 rows and columns: ";
		cin>>r1>>c1;
		cout<<"Enter the matrix 2 rows and columns: ";
		cin>>r2>>c2;
		if(c1==r2){
		int **mat1=new int*[r1];
		for(i=0;i<r1;i++){
			mat1[i]=new int[c1];
		}
		int **mat2=new int*[r2];
		for(i=0;i<r2;i++){
			mat2[i]=new int[c2];
		}
		int **mat3=new int*[r1];
		for(i=0;i<r1;i++){
			mat3[i]=new int[c2];
		}
		cout<<"Enter the elements of matrix 1:\n";
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				cin>>mat1[i][j];
			}
		}
		cout<<"Enter the elements of matrix 2:\n";
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				cin>>mat2[i][j];
			}
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				mat3[i][j]=0;
				for(int k=0;k<r2;k++){
					mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
				}
			}
		}
		cout<<"Product matrix:\n";
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				cout<<mat3[i][j]<<" ";
			}
			cout<<"\n";
		}
		for(i=0;i<r1;i++){
			delete[] mat1[i];
		}
		delete[] mat1;
		for(i=0;i<r2;i++){
			delete[] mat2[i];
		}
		delete[] mat2;
		for(i=0;i<r1;i++){
			delete[] mat3[i];
		}
		delete[] mat3;
	}
	else{
		cout<<"Multiplication not possible\n";
	}
}
	return 0;
}
