class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     // Add your code here
     queue<Node*>q;
     if(root == NULL)
     {
         return true;
     }
     q.push(root);
     while(!q.empty())
     {
         Node* temp = q.front();
         q.pop();
         int sum = 0;
         bool left = false, right = false;
         if(temp->left != NULL)
         {
             q.push(temp->left);
             left = true;
             sum += temp->left->data;
             
         }
          if(temp->right != NULL)
         {
             q.push(temp->right);
             left = true;
             sum += temp->right->data;
             
         }
         if(left || right)
         {
             if(temp->data != sum)
             {
                 return false;
             }
         }
     }
     return true;
     
     
    }
};
