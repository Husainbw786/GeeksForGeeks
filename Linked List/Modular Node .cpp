int modularNode(Node* head, int k)
{
	// Code here
	Node* temp = head;
	int ans = -1;
	int i = 1;
	while(temp)
	{
	    if(i % k == 0)
	    {
	        ans = temp->data;
	    }
	    temp = temp->next;
	    i++;
	}
	return ans;
}
