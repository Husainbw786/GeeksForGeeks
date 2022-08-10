void Solve(Node* root,vector<int>&v)
{
    if(root == NULL)
    {
        return;
    }
    Solve(root->left,v);
    v.push_back(root->data);
    Solve(root->right,v);
}

float findMedian(struct Node *root)
{
      //Code here
      
      vector<int>v;
      Solve(root,v);
      int n = v.size();
   
         if(n%2 == 0)
         {
           return (float)(v[(n-1)/2]+v[(n-1)/2+1])/2;
         }
         else
         {
           return (float)v[(n)/2];
         }
}
