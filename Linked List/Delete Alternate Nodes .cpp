void deleteAlt(struct Node *head){
    // Code here
    Node *temp = head;
    Node *curr = head->next;
    
    while(temp != NULL && curr != NULL)
    {
        temp->next = curr->next;
        free(curr);
        temp = temp->next;
        if( temp != NULL)
        {
            curr = temp->next;
        }
    }
}
