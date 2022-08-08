
class Solution
{
   public:
   //Function to return list containing elements of right view of binary tree.
   vector<int> rightView(Node *root)
   {
      // Your Code here
      deque<Node*>q;
      vector<int>v;
      if(!root)
      {
          return v;
      }
      q.push_front(root);
      while(!q.empty())
      {
          v.push_back(q.back()->data);
          int size = q.size();
          while(size--)
          {
              Node* temp = q.front();
              q.pop_front();
              if(temp->left)
              {
                  q.push_back(temp->left);
              }
              if(temp->right)
              {
                  q.push_back(temp->right);
              }
          }
      }
      return v;
   }
};
