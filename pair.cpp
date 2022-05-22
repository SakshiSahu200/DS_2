// C++ program to find a pair with given sum x.
#include<bits/stdc++.h>
using namespace std;

// structure of node of doubly linked list
struct Node
{
	int data;
	struct Node *next, *prev;
};

// Function to find pair whose sum equal to given value x.
int pairSum(struct Node *head, int x)
{
    if(head==nullptr|| head->next==nullptr) return -1;
   Node *curr=head;
   unordered_map<int,int>h;
   int cnt=0;
   while(curr->next!=nullptr){
    if(h.find(x-(curr->data))==h.end())
       {
           h.insert(curr);
           curr=curr->next;
       }
       else
        cnt++;
   }
   if(cnt==0) return -1;
   return cnt;
}

// A utility function to insert a new node at the
// beginning of doubly linked list
void insert(struct Node **head, int data)
{
	struct Node *temp = new Node;
	temp->data = data;
	temp->next = temp->prev = NULL;
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

// Driver program
int main()
{
	struct Node *head = NULL;
	insert(&head, 9);
	insert(&head, 8);
	insert(&head, 6);
	insert(&head, 5);
	insert(&head, 4);
	insert(&head, 2);
	insert(&head, 1);
	int x = 7;

	cout<<pairSum(head, x);

	return 0;
}

