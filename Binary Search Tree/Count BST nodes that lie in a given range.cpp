class Solution{
public:

    void Solve(Node* root,int l ,int h,int & count)
    {
        if(root == NULL)
         {
          return;
         } 
      if(root->data >= l && root->data <= h)
      {
          count++;
      }
      Solve(root->left,l,h,count);
      Solve(root->right,l,h,count);
      
    }
    int getCount(Node *root, int l, int h)
    {
      // your code goes here  
      
      int count = 0;
      Solve(root,l,h,count);
      return count;
     
    }
};
