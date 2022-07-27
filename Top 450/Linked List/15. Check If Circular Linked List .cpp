bool isCircular(Node *head)
{
   // Your code here
   int count = 0;
   Node* temp =  head;
   while(temp->next != head)
   {
       if(temp->next == NULL)
       {
           return 0;
       }
       temp = temp->next;
   }
   return 1;
}
