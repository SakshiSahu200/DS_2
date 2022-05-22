void rotateByN(Node* &head, int n)
{
    if(n==0)
        return head;
    node *curr=head;
    int count=1;
    while(count <n && curr!=nullptr)
    {
        curr= curr->next;
        count++;
    }
    node *ptr=curr;
    while(curr->next != nullptr)
        curr=curr->next;
    curr->next=head;
    head->prev = curr;
    head= ptr->next;
    head->prev= nullptr;
    ptr->next= nullptr;
}

Node* revListInGroupOfGivenSize(Node* head, int k)
{
    Node *current = head;
    Node* next = NULL;
    Node* newHead = NULL;
    int count = 0;

    // reversing the current group of k
    // or less than k nodes by adding
    // them at the beginning of list
    // 'newHead'
    while (current != NULL && count < k)
    {
        next = current->next;
        push(&newHead, current);
        current = next;
        count++;
    }
    // if next group exists then making the desired
    // adjustments in the link
    if (next != NULL)
    {
        head->next = revListInGroupOfGivenSize(next, k);
        head->next->prev = head;
    }

    // pointer to the new head of the
    // reversed group
    // pointer to the new head should point to NULL, otherwise you won't be able to traverse list in reverse order using 'prev'
    newHead->prev = NULL;
    return newHead;
}
