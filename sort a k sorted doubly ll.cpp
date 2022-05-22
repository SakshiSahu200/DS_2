// function to sort a k sorted doubly linked list
struct Node* sortAKSortedDLL(struct Node* head, int k)
{
	if(head == NULL || head->next == NULL)
		return head;
	// perform on all the nodes in list
	for(Node *i = head->next; i != NULL; i = i->next) {
		Node *j = i;
		// There will be atmost k swaps for each element in the list
		// since each node is k steps away from its correct position
		while(j->prev != NULL && j->data < j->prev->data) {
			// swap j and j.prev node
			Node* temp = j->prev->prev;
			Node* temp2 = j->prev;
			Node *temp3 = j->next;
			j->prev->next = temp3;
			j->prev->prev = j;
			j->prev = temp;
			j->next = temp2;
			if(temp != NULL)
				temp->next = j;
			if(temp3 != NULL)
				temp3->prev = temp2;
		}
		// if j is now the new head
	// then reset head
		if(j->prev == NULL)
			head = j;
	}
	return head;
}
