int getNthFromLast(Node *head, int n)
{
       // Your code here
       int count = 0;
       int ans = -1;
       
       Node* temp = head;
       while(temp)
       {
           count++;
           temp = temp->next;
       }
       if(n > count)
       {
           return ans;
       }
       temp = head;
       int k = count - n;
       count = 0;
       while(count < k)
       {
           temp = temp->next;
           count++;
           
       }
       ans = temp->data;
       return ans;
}
