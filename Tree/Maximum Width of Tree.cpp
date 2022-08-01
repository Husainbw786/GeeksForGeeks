      queue<Node*>q;
        int max = 0;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            if(max < size)
            {
                max = size;
            }
            for(int i = 0;i<size;i++)
            {
                 Node *temp = q.front();
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
        }
        return max;
    }
};
