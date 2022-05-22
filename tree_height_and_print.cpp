//calculating height of binary tree and printing all elements at kth distance
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left,*right;
    void node (int x)
    {
        data=x;
        left=nullptr;
        right=nullptr;
    }
};
int height(node *root){
    if(root==nullptr) return 0;
    else
        return (max(height(root->left),height(root->right)))+1;
}
void print(node *root,int k)  //print nodes at k distance
{                                  // TC- O(n) SC-O(h)
    if(root==nullptr) return;
    if(k==0) {
        cout<<root->data<<" ";
    }
    print(root->left,k-1);
      print(root->right,k-1);
}
int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    cout<<height(root)<<endl;
    print(root,1);
    return 0;
}
