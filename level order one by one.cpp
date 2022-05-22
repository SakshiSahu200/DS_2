#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
    node (int x)
    {
        data=x;
        left=nullptr;
        right=nullptr;
    }
};
void levelOrder(node *root)
{
    if(root==nullptr) return;
        queue<node*>q;
    q.push(root);
    while(q.empty()==false)
    {
        node *curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if((curr->left)!=nullptr)
            q.push(curr->left);
        if((curr->right)!=nullptr)
            q.push(curr->right);
    }
}
int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
     levelOrder(root);
    return 0;
}
