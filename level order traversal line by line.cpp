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
void levelOrder(node *root) // TC- O(n+w)=O(n)   SC= O(width) as we can ignore null...null is not counted in asymptotic notations
{

    if(root==nullptr) return;
    queue<node*>q;
    q.push(root);
    q.push(nullptr);
    while(q.size()>1)
    {
        node *curr=q.front();
        q.pop();
        if(curr==nullptr){
                cout<<endl;
            q.push(nullptr);
            continue;
        }
        cout<<curr->data<<" ";
        if(curr->left!=nullptr) q.push(curr->left);
        if(curr->right!=nullptr) q.push(curr->right);
    }
}
void LevelOrder(node *root) //method-2
{
    if(root==nullptr) return;
    queue<node*>q;
    q.push(root);
    while(q.empty()==false){

    int count=q.size();
    for(int i=0;i<count;i++){
            node *curr=q.front();
            q.pop();
        cout<<curr->data<<" ";
         if(curr->left!=nullptr) q.push(curr->left);
        if(curr->right!=nullptr) q.push(curr->right);
    }
    cout<<endl;
    }
}
int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
     LevelOrder(root);
    return 0;
}
