Node* deleteK(Node *head,int K)
{
  //Your code here
  if(K==1)
  {
      return NULL;
  }
    Node* temp = head;
    Node* prev = NULL;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        if(count == K)
        {
            prev->next = temp->next;
            count = 0;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
  
  
}
