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
node *getSuccessor(node *curr){
    curr=curr->right;
    while(curr!=nullptr && curr->left!=nullptr)
        curr=curr->left;
    return curr;
}
node *delNode(node *root,int x){
    if(root==nullptr) return root;{

    if(root->data >x)
        root->left=delNode(root->left,x);
    else if(root->data< x)
        root->right= delNode(root->right,x);
    else{
        if(root->left==nullptr)
        {
            node *temp= root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            node *temp=root->left;
            delete  root;
            return temp;
        }
        else
        {
            node *succ=getSuccessor(root);
            root->data= succ->data;
            root->right=delNode(root->right,succ->data); //recursively calling for right subtree for deleting leftmost leaf
        }
        return root;
    }
}}
void display(node *root)
{
    //after inserting we output inorder traversal here
    if(root==nullptr) return;
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int main()
{
    node *root=new node(15);
    root->left=new node(10);
    root->right=new node(20);
   // root=insert_iteratively(root,34);
   root=delNode(root,15);
    display(root);
    return 0;}
