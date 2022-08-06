class Solution
{
    public:
    vector<int> printCousins(Node* root, Node* node_to_find)
    {
        //code here
        vector<int>v;
        if(root == NULL)
        {
            v.push_back(-1);
            return v;
        }
        int flag = 0;
        queue<Node*>q;
        q.push(root);
       
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                Node* temp = q.front();
                q.pop();
        if(temp->left == node_to_find || temp->right == node_to_find)
                {
                    flag = 1;
                    continue;
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
            if(flag == 1)
            {
                while(!q.empty())
                {
                    v.push_back(q.front()->data);
                    q.pop();
                }
            }
        }
         if(v.size()==0)
         {
           v.push_back(-1);
         }
        return v;
    }
    
};
