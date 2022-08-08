class Solution{
    public:
    bool areAnagrams(Node *root1, Node *root2)
    {
      queue<Node*>q1,q2;
      q1.push(root1);
      q2.push(root2);
      while(!q1.empty() && !q2.empty())
      {
          int size = min(q1.size(),q2.size());
          unordered_map<int,int>mp1,mp2;
          while(size--)
          {
              Node* temp1 = q1.front();
              Node* temp2 = q2.front();
              q1.pop();
              q2.pop();
              mp1[temp1->data]++;
              mp2[temp2->data]++;
              if(temp1->left)
              {
                  q1.push(temp1->left);
              }
              
              if(temp1->right)
              {
                  q1.push(temp1->right);
              }
              
              if(temp2->left)
              {
                  q2.push(temp2->left);
              }
              
              if(temp2->right)
              {
                  q2.push(temp2->right);
              }
          }
          if(mp1 != mp2)
          {
              return false;
          }
      }
      if(!q1.empty() || !q2.empty())
      {
          return false;
      }
      return true;
    }
};
