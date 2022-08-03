class Solution
{
public:
    int getCount(Node *root, int k)
    {
        //code here
        queue<Node*>q;
        q.push(root);
        int ans = 0;
        int count = 0;
        while(!q.empty())
        {
            int size = q.size();
            count++;
            for(int i=0;i<size;i++)
            {
                Node* temp = q.front();
                q.pop();
                if(temp->left == NULL && temp->right == NULL && k-count >=0 )
                {
                    k = k-count;
                    ans++;
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
            
        }
        
     return ans;
        
    }
};
