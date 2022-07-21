int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
     Node *temp = head;
     int count = 1;
     while(temp->next != NULL)
     {
         count++;
         temp = temp->next;
     }
     if(count % 2 == 0)
     {
       return 0;
     }
     return 1;
}
