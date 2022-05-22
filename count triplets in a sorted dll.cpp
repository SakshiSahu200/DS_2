//Method 1- Naive approach which uses three for loops and increment the count if sum of all three is = x
int countTriplets(struct *node head, int x)
{
    int cnt=0;
    for(node *curr=head; curr!=nullptr;curr=curr->next)
    {
        for(node *curr1=curr->next; curr1!=nullptr;curr1=curr1->next)
        {
            for(node *curr2=curr1->next; curr2!=nullptr;curr2=curr2->next)
            {
                if(curr->data + curr1->data + curr2->data==x)  // TC- O(n3)  SC= O(1)
                    cnt++;
            }
        }
    }
    return cnt;
}
// method 2- Hashing
//first calculate sum of data in two nodes then check for (x-sum); if present, increment the count
int countTriplets(*node head, int x)
{
     node* ptr,*ptr1,*ptr2;
    int count=0;
    unordered_map<int,node*>h;
    for(ptr=head;ptr!=nullptr;ptr=ptr->next)
    {
        h[ptr->data]=ptr; //store all elements in hash table with their pointers (address)
    }
    for(ptr1=head;ptr1!=nullptr;ptr1=ptr1->next)
    {
         for(ptr2=ptr1->next;ptr2!=nullptr;ptr2=ptr2->next)     //TC- O(n2)  SC= O(n)
         {
             int sum= ptr1->data + ptr2->data;
             if(h.find(x- sum)!=h.end()&& h[x- sum]!= ptr1 && h[x-sum]!=ptr2)
                cnt++;
         }
    }
    return cnt/3;
}
//method -3 - two pointers...fix first elements and take two pointers next of first and other pointing towards last element and check out the sum
int countPairs(node* first,node *last,int val)
{
    int cnt=0;
    while(first!=nullptr && last!=nullptr && last->next!=first && first!=last)
    {
        if(first->data + last->data == val){
            cnt++;
        first=first->next;            ////TC- O(n2)  SC= O(1)
        last=last->prev;
    }
    else if(first->data + last->data > val)
        last = last->prev;
    else
        first= first->next;
}
return cnt;
}
int countTriplets(node* head, int x)
{
    if(head==nullptr) return 0;
   node *curr,*first, *last;
    int count=0;
    last=head;
    while(last->next!=nullptr)
        last=last->next;
    for(curr=head;curr!=nullptr;curr=curr->next)
    {
        first=curr->next;
        count= count + countPairs(first,last,(x-curr->data));
    }
    return count;
}

