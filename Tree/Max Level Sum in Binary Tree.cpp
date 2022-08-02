class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
        queue<Node*>q;
        q.push(root);
        int max = INT_MIN;
        
        while(!q.empty())
        {
            int sum = 0;
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                Node* temp = q.front();
                q.pop();
                sum += temp->data;
               
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
                if(sum > max)
                {
                    max = sum;
                }
            
        }
        return max;
    }
};
