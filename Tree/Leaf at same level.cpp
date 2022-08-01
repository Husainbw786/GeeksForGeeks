class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        //Your code here
        int flag = 0;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                Node* Curr = q.front();
                q.pop();
                if(Curr->left == NULL && Curr->right == NULL)
                {
                    flag = 1;
                }
                if(Curr->left)
                {
                    q.push(Curr->left);
                }
                if(Curr->right)
                {
                    q.push(Curr->right);
                }
            }
            if(flag == 1 && q.empty())
             {
               return true;
             }
            if(flag == 1 && !q.empty())
             {
               return false;
             }
            
        }
        
    }
};
