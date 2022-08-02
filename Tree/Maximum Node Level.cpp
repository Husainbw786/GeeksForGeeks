int maxNodeLevel(Node *root)
{
 // Add your code here
 queue<Node*>q;
 int level = 0;
 
 int max = INT_MIN;
 int ans = 0;
 q.push(root);
    while(!q.empty())
    {
       int size = q.size();
       int node = 0;
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
           node++;
           if(max < node)
           {
               max = node;
               ans = level;
           }
       }
       level++;
    }
    return ans;
}
