
struct Node * mergeResult(Node *node1,Node *node2)
{
    // your code goes here
    Node* temp1 = node1;
    Node* temp2 = node2;
    
     Node* list = new Node();
     list->data = -1;
     list->next = NULL;
     Node* head = list;
     
     while(temp1 && temp2)
     {
         if(temp1->data > temp2->data)
         {
             list->next = temp2;
             list = list->next;
             temp2 = temp2->next;
         }
         else
         {
             list->next = temp1;
             list = list->next;
             temp1 = temp1->next;
         }
     }
     while(temp1)
     {
         list->next = temp1;
         list = list->next;
         temp1 = temp1->next;
     }
        while(temp2)
     {
         list->next = temp2;
         list = list->next;
         temp2 = temp2->next;
     }
       head = head->next;
      
      Node* prev = NULL;
      Node* next = NULL;
      Node* Curr = head;
      while(Curr)
      {
          next = Curr->next;
          Curr->next = prev;
          prev = Curr;
          Curr = next;
      }
      return prev;
       
