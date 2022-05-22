node *getTail(node *head)
{
    node *ptr=head;
    while(ptr!=NULL &&ptr->next!=NULL){
        ptr=ptr->next;
    }
    return ptr;
}
node *partition(node *head,node *tail)
{
    node *pivot=head;
    node *curr=head->next;
    node *prev=head;
    while(curr!=tail->next){
        if(pivot->data > curr->data){
            swap(prev->next->data,curr->data);
            prev=prev->next;
        }
        curr=curr->next;
    }
    swap(prev->data,pivot->data);//pivot at its right position
    return prev; //position of new pivot
//so after first iteration, I got a fixed position of pivot
}
void solveSort(node *head,node *tail)
{  //for no node or 1 node...it is already sorted
    if(head==nullptr ||tail==NULL|| head==tail) return;
//if that is not the case, I'll choose the pivot
//and the pivot will be choosen acc to a func called partition
    node *pivot=partition(head,tail);
    solveSort(head,pivot);
    solveSort(pivot->next,tail);
}
void quickSort(struct node **headRef) {
     node *head=*headRef;
    if(head==nullptr || head->next==nullptr) return;
    node *tail= getTail(head);
    solveSort(head,tail);
}
