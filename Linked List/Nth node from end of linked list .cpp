//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int k)
{
       // Your code here
       Node *temp = head;
       int count = 0;
       while(temp)
       {
           count++;
           temp = temp->next;
           
       }
       if(count < k)
       {
           return -1;
       }
       int i = 1;
       int x = count - k+1;
       int ans = -1 ;
       temp = head;
       while(temp)
       {
           if(i == x)
           {
               return temp->data;
           }
           temp = temp->next;
           i++;
       }
       return ans;
       
}
