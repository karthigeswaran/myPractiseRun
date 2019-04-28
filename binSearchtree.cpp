#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};
struct Node* getNewNode(int data){
    struct Node* newNode=new Node();
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}
struct Node* insert(struct Node* root,int data){
    if(root==NULL){
        root=getNewNode(data);
    }else if(root->data>=data){
        root->left=insert(root->left,data);
    }else if(root->data<data){
        root->right=insert(root->right,data);
    }
    return root;
}
void search(struct Node* root,int data){
    if(root==NULL){
        cout<<"Search unsuccessfull"<<endl;
    }else if(root->data==data){
        cout<<"search successful, data found"<<endl;
    }else if(data<root->data){
        search(root->left,data);
    }else if(data>root->data){
        search(root->right,data);
    }
    return;
}
struct Node* FindMin(Node* root){
    while(root->left==NULL) root=root->left;
    return root;
}
struct Node* del(struct Node* root,int data){
    if(root=NULL){
        return root;
    }else if(root->data>data){
        root->left=del(root->left,data);
    }else if(root->data<data){
        root->right=del(root->right,data);
    }else {
            if(root->left==NULL&&root->right==NULL){
            delete root;
            root=NULL;
        }else if(root->left==NULL){
            struct Node* temp=root;
            root=root->right;
            delete temp; 
        }else if(root->right==NULL){
            struct Node* temp=root;
            root=root->left;
            delete temp;
        }else {
            struct Node* temp=FindMin(root->right);
            root->data=temp->data;
            root->right=del(root->right,temp->data);
        }
    }
return root;    
}
void inorder(struct Node* root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return;
}
void print2D(Node *root,int space){
    int count = 5;
    if(root==NULL) return;
    space+=count;
    print2D(root->right,space);
    cout<<endl;
    for(int i=count;i<space;i++) cout<<" ";
    cout<<root->data<<endl;
    print2D(root->left,space);

}
int main(){
    struct Node* root=NULL;int data,x;
    flag:
    cout<<"Options\n1.Insert\n2.search\n3.delete\n4.Inorder print\n5.Print in 2D\n6.Exit\nEnter your choice:";
    cin>>x;
    switch(x){
        case 1:
        cout<<"Enter the data:";
        cin>>data;
        root=insert(root,data);
        goto flag;

        case 2:
        cout<<"Enter the data:";
        cin>>data;
        search(root,data);
        goto flag;

        case 3:
        cout<<"Enter the data:";
        cin>>data;
        del(root,data);
        goto flag;

        case 4:
        inorder(root);
        cout<<endl;
        goto flag;

        case 5:
        cout<<"Printing in 2D";
        print2D(root,0);
        goto flag;

        case 6:
        break;

        default:
        cout<<"Invalid option"<<endl;
        goto flag;
    }
    delete root;
    return 0;
}