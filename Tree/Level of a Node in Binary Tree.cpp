class Solution{
  public:
    // function should return level of the target node
    int getLevel(struct Node *node, int target)
    {
    	//code here
    	queue<Node*>q;
    	int count = 1;
    	q.push(node);
    	while(!q.empty())
    	{
    	    int size = q.size();
    	    for(int i = 0;i<size;i++)
    	    {
    	        Node* temp = q.front();
    	        q.pop();
    	        if(temp->left)
    	        {
    	            q.push(temp->left);
    	        }
    	        if(temp->right)
    	        {
    	            q.push(temp->right);
    	        }
    	        if(temp->data == target)
    	        {
    	            return count;
    	        }
    	        
    	    }
    	    count++;
    	}
    	return 0;
    }
};
