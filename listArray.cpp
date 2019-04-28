#include <iostream>
using namespace std;

int main(){
    int l;
    cout<<"Enter the size of the array: ";
    cin>>l;
    int *arr=new int[l];
    int x,e;
    cout<<"Options\n1.Create\n2.Insert\n3.Delete\n4.Display\n5.Exit\nEnter your choice:";
    cin>>x;
    switch(x){
        case 1:
        cout<<"Enter Number of elements:";
        cin>>e;
        create(arr,e);
        break;

        case 2:
        cout<<"Enter position to insert element:";
        cin>>e;
        insert(arr,e);
        break;

        case 3:
        cout<<"Enter the element to be deleted:";
        cin>>e;
        del(arr,e);
        break;

        case 4:
        cout<<"List of all elements: ";
        display(arr);
        break;

        case 5:
        break;

        default:
        cout<<"Invalid option";
        goto label;
        break;



    }

    return 0;
}