int sumOfLastN_Nodes(struct Node* head, int k)
{
      // Code here
      Node* temp = head;
      int count = 0;
      while(temp)
      {
          count++;
          temp = temp->next;
      }
      int x = count - k;
      int i ;
      int sum = 0;
      temp = head ;
      for(i=0;i<count;i++)
      {
          if(count-k <= i)
          {
              sum = sum + temp->data;
              
          }
          temp = temp->next;
      }
      return sum;
      
}
