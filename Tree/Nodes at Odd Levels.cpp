class Solution
{
public:
    vector<Node *> nodesAtOddLevels(Node *root)
    {
        //code here
        vector<Node*>v;
        queue<Node*>q;
        int count = 1;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                Node* temp = q.front();
                if(count % 2 != 0)
                {
                    v.push_back(temp);
                }
                q.pop();
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
