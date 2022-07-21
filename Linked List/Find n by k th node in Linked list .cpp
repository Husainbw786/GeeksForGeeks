int fractional_node(struct Node *head, int k)
{
    // your code here
    
    int count = 0;
    Node *temp = head;
    while(temp)
    {
        count++;
        temp = temp->next;
    }
    int x = ceil(count/(k*1.0));
    temp = head;
    for(int i=1;i<x;i++)
    {
      temp = temp->next;
    }
     return temp->data;
    
}
