#include <iostream>
using namespace std;

void create(int *arr, int e){
    for(int i=0;i<e;i++){
        cin>>arr[i];
    }
}
int* insert(int *arr, int e,int n,int *l){
    int *temp=new int[*l];
    for(int i = 0; i < e; i++ ){
        temp[i]=arr[i];
    }
    temp[e]=n;
    if(e<*l){
        for(int i=e+1;i<*l;i++){
            temp[i]=arr[i-1];
        }
    }
    delete[] arr;
    return temp;
}
int *del(int * arr,int e,int *l){
    int i;
    int * temp = new int[*l-1];
    for(i=0;i<*l;i++){
        if(arr[i]==e){
            break;
        }
        temp[i]=arr[i];
    }
    for(i=i+1;i<=*l;i++){
        temp[i-1]=arr[i];
    }
    delete[] arr;
    return temp;
}
void display(int*arr,int* l){
    for(int i=0;i<*l;++i){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int *arr;
    int x,e,n,*l;
    label:{
    cout<<"Options\n1.Create\n2.Insert\n3.Delete\n4.Display\n5.Exit\nEnter your choice:";
    cin>>x;
    switch(x){
        case 1:
        cout<<"Enter Number of elements:";
        cin>>e;
        arr = new int[e];
        cout<<"Enter the elements of the array:\n";
        create(arr,e);
        *l=e;
        goto label;

        case 2:
        cout<<"Enter position to insert element:";
        cin>>e;
        cout<<"Enter the element:";
        cin>>n;
        *l=*l+1;
        arr=insert(arr,e-1,n,l);
        goto label;

        case 3:
        cout<<"Enter the element to be deleted:";
        cin>>e;
        *l=*l-1;
        arr=del(arr,e,l);
        goto label;

        case 4:
        cout<<"List of all elements: ";
        display(arr,l);
        goto label;

        case 5:
        break;

        default:
        cout<<"Invalid option";
        goto label;
        break;
        }
    }
    return 0;
}