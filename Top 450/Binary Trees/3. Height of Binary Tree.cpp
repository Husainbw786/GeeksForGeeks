class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        int count = 0;
        queue<Node*>q;
        q.push(node);
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
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
        return count;
    }
};
