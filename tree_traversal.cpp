//traversal of tree can be done by two ways....DFS and BFS...BFS is simple, in DFS we have three i.e, inorder, pre and postorder
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
void levelOrder(node *root)      //here exact auxiliary space is width of binary tree,in general we say O(n) ...or say accurate as theta(w)
{                                 //while time complexity is theta(n)
    //here we enque item one by one levelwise, then pop and print it after every level , at the same time enque the items of next level(i.e, their children)
    //so first enque root,pop it then print it...now enque next level...and repeat until left nd right child are not null.
    if(root==nullptr) return;
    queue<node*>q;
    q.push(root);
    while(q.empty()==false){
        node *curr=q.front();
        q.pop();
        cout<<(curr->data)<<" ";
        if(curr->left!=nullptr)
            q.push(curr->left);
         if(curr->right!=nullptr)
            q.push(curr->right);
    }

}
void inorder(node *root)   //auxiliary space - O(h) TC- O(n)
{
    if(root==nullptr) return;  //if(root!=nullptr){....below code..}
    inorder(root->left);
    cout<<(root->data)<<" ";
    inorder(root->right);
}
void preorder(node *root)
{
    if(root!=nullptr)
    {
        cout<<(root->data)<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root)
{
    if (root!=nullptr)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<(root->data)<<" ";
    }
}
int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    levelOrder(root);
    return 0;
}
