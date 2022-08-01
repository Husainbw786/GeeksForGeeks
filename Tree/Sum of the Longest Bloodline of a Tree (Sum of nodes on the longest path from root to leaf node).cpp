class Solution
{
public:
  void inorder(Node* root,int sum,int & maxi,int len, int & maxlen)
  {
      if(root == NULL)
      {
          if(len>maxlen)
          {
              maxlen = len;
              maxi = sum;
          }
          else if(len == maxlen)
          {
              maxi = max(maxi,sum);
          }
          return;
      }
      sum += root->data;
      inorder(root->left,sum,maxi,len+1,maxlen);
      inorder(root->right,sum,maxi,len+1,maxlen);
  }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int len = 0;
        int maxi = INT_MAX;
        int maxlen = 0;
        int sum = 0;
        inorder(root,sum,maxi,len,maxlen);
        return maxi;
        
    }
};
