class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
       //Your code here
       queue<Node*>q;
       int count = 0;
       q.push(root);
       int sum_even = 0;
       int sum_odd = 0;
       while(!q.empty())
       {
           int size = q.size();
           while(size--)
           {
               Node* temp = q.front();
               q.pop();
               if(count % 2 == 0)
               {
                   sum_even += temp->data;
                   if(temp->left)
                   {
                      q.push(temp->left);
                   }
                   if(temp->right)
                   {
                       q.push(temp->right);
                   }
               }
               else
               {
                   sum_odd += temp->data;
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
           count++;
           
       }
       return sum_even-sum_odd;
    }
};
