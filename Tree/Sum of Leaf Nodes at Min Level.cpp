class Solution
{
public:
    int minLeafSum(Node *root)
    {
        //code here
        queue<Node*>q;
        int min = INT_MAX;
        int count = 0;
        int ans = 0;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            int sum = 0;
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
                if(temp->left == NULL && temp->right == NULL)
                {
                    sum += temp->data;
                }
            }
            if(sum != 0)
            {
                if(count < min)
               {
                min = count;
                ans = sum;
               }
            }
            count++;
        }
        return ans;
    }
};
