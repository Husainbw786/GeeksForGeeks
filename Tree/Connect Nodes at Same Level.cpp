
class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       queue<Node*>q;
       q.push(root);
       while(!q.empty())
       {
           int size = q.size();
           Node* prev = NULL;
           for(int i=0;i<size;i++)
           {
               Node* temp = q.front();
               q.pop();
               if(i == size-1)
               {
                   temp->nextRight = nullptr;
               }
               else
               {
                   temp->nextRight = q.front();
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
    }    
      
};
