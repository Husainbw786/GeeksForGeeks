class Solution
{
    public:
    vector<int> largestValues(Node* root)
    {
        //code here
        vector<int>v;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            int largest = INT_MIN;
            for(int i=0;i<size;i++)
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
                if(largest < temp->data)
                {
                    largest = temp->data;
                }
              
            }
              v.push_back(largest);
            
        }
        return v;
    }
};
