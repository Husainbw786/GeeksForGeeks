class Solution{
  public:
    /* Function to print nodes of extreme corners
    of each level in alternate order */
    vector<int> ExtremeNodes(Node* root)
    {
        // Your code here
        vector<int>v;
        if(root == NULL)
        {
            return v;
        }
        int count = 1;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            for(int i= 0;i<size;i++)
            {
                Node* temp = q.front();
                q.pop();
                if(count % 2 == 0)
                {
                    if( i == 0)
                    {
                        v.push_back(temp->data);
                    }
                }
                else
                {
                    if(i == size-1)
                    {
                        v.push_back(temp->data);
                    }
                }
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            count++;
            
        }
        return v;
        
    }
};
