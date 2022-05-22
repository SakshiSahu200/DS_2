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
void leftView(node *root)
{
    if(root==nullptr) return;
    queue<node*>q;
    q.push(root);
    while(q.empty()==false)
    {
        int count=q.size();
        q.pop();
        for(int i=0;i<count;i++)
        {
            node *curr=q.top();
            q.pop();
            if(i==0)
                cout<<curr->data<<" ";

           if(curr->left!=nullptr) q.push(curr->left);
        if(curr->right!=nullptr) q.push(curr->right);
    }
}}
int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
     leftView(root);
    return 0;
}
