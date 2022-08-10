void Solve(Node* root, vector<int>&v)
{
    if(root == NULL)
    {
        return;
    }
    Solve(root->left,v);
    v.push_back(root->data);
    Solve(root->right,v);
}
int sum(Node* root, int k) 
{ 
  
    // Your code here
    vector<int>v;
    Solve(root,v);
    int sum = 0;
    for(int i=0;i<k;i++)
   {
     sum += v[i]; 
   }    
   return sum;
    
} 
