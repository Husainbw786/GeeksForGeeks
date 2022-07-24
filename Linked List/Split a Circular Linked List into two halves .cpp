void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
   if(head==NULL or head->next==NULL)
   {
       return;
   }
  Node* slow = head;
  Node* fast = head->next;
  while(fast != head && fast->next != head)
  {
      slow = slow->next;
      fast = fast->next->next;
  }
  Node* afterMid = slow->next;
    *head1_ref = head;
     slow->next = head;
     
     *head2_ref = afterMid;
     Node* temp = *head2_ref; 
     while(temp->next != head)
     {
         temp = temp->next;
     }
     temp->next = *head2_ref;
     
    
}
