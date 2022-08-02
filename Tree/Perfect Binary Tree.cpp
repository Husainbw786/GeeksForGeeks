class Solution
{
public:
    bool isPerfect(Node *root)
    {
        //code here
         
        queue<Node*>q;
        int count = 0 ;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            if(size != pow(2,count))
            {
                return false;
            }
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
            }
            count++;
        }
        return true;
        
    }
};
