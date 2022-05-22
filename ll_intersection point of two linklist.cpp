#include<iostream>
using namespace std;
struct node{
int data;
node *next;
node(int x)
{
    data =x;
    next=nullptr;
}
};
node* Intersection(node *l1,node* l2)
{
    if(l1==nullptr || l2==nullptr) return nullptr;
    unordered_set<int>h;
    for(node* curr=l1;curr!=nullptr;curr=curr->next)
        h.insert(curr);
    node *ptr=l2;
    while(ptr!=nullptr){
        if(h.find(ptr)!=h.end())
            return ptr;
    }
    return ptr;
}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
