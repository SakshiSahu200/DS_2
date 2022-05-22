#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    node *left,*right;
    int data;
    node(int x)
    {
        data=x;
        left=nullptr;
        right=nullptr;
    }
};
void inorder(node *root)   //TC- O(n) SC-O(h)
{
    stack<node*>s;
    node *curr=root;
    while(curr!=nullptr || s.empty()==false)
    {
        while(curr!=nullptr){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<(curr->data)<<" ";
        curr=curr->right;
    }
}
int main()
{
node *root=new node(10);
    root->left=new node(5);
    root->right=new node(20);
    root->right->right=new node(40);
    inorder(root);
    return 0;}
