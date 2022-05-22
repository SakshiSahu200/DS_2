#include<iostream>
using namespace std;

struct node
{
    node *left,*right;
    int data;
    node(int x){
    data=x;
    left=nullptr;
    right=nullptr;
    }
};
node *findFloor(node* root,int x)
{
    node *res=nullptr;
    while(root!=nullptr){
    if(root->data==x)
        return root;
    else if(root->data< x){
             res=root;
        root=root->right;}
    else{
            res=root;
        root=root->left;
}
}
return res;}
int main()
{
    node *root=new node(10);
    root->left=new node(5);
    root->right=new node(15);
    root->left->left=new node(12);
    root= findFloor(root,25);
    root!=nullptr?cout<<root->data : cout<<"-1";
    return 0;
}
