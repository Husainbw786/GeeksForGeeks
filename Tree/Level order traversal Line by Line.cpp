vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  queue<Node*>q;
  vector<vector<int>>ans;
  if(node == NULL)
  {
      return ans;
  }
  q.push(node);
  
  while(! q.empty())
  {
      Node* temp = q.front();
      int size = q.size();
      vector<int>level;
      
       for(int i=0;i<size;i++)
     {
         Node* temp = q.front();
         q.pop();
         if(temp->left)
          {
            q.push(temp->left);
          }
         if(temp->right)
          {
            q.push(temp->right);
          }
          level.push_back(temp->data);
     }
     ans.push_back(level);
     
  }
  return ans;
}
