
https://www.codingninjas.com/codestudio/problems/count-triplets-in-a-sorted-doubly-linked-list-whose-sum-is-equal-to-a-given-value-x_985286?leftPanelTab=1




int countTriplets(DLLNode* head, int x)
{
    // WRITE YOUR CODE HERE
    int size = 1;
    DLLNode* temp  = head;
    
    
    while(temp->next != NULL)
    {
        temp = temp->next;
        size++;
    }
    int count = 0;
    int i=0;
    DLLNode* Curr = head;
    while(Curr->next->next != NULL)
    {
        int req = x - (Curr->data);
        DLLNode* start = Curr->next;
        int j = i+1;
        DLLNode* end = temp;
        int k = size-1;
        while(start != end && j<k)
        {
            int sum = (start->data) + (end->data);
            if(sum == req)
            {
                count++;
                start = start->next;
                j++;
                end = end->prev;
                k--;
            }
            else if(sum > req)
            {
                end = end->prev;
                k--;
            }
            else 
            {
                start = start->next;
                j++;
            }
           
        }
        Curr= Curr->next;
        i++;
    }
    return count;
   
    
}  
