 void fun(struct Node *root,int k,vector<int>&v)
 {
     if(root == NULL)
     {
         return;
     }
     if(k==0)
     {
         v.push_back(root->data);
     }
     else
     {
     fun(root->left,k-1,v);
     fun(root->right,k-1,v);
     }
 }
vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
    vector<int>v;
    fun(root,k,v);
    return v;
}
