#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int x){
    data=x;
    left=nullptr;
    right=nullptr;
    }
};
int getSize(node *root)     //TC- O(n) and SC- O(h) for h number of recursive call stack
{

    if(root==nullptr) return 0;
    else
        return (1+getSize(root->left)+ getSize(root->right));

}
int main()
{
    node *root=new node(10);
    root->left=new node(5);
    root->right=new node(20);
    root->right->right=new node(40);
    cout<<getSize(root);
    return 0;
}
