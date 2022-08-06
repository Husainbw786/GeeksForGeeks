void pathCounts(Node *root)
{
    //Your code here
    queue<Node*>q;
    int count = 1;
    q.push(root);
    q.push(NULL);
    map<int,int>mp;
    while(! q.empty())
    {
      Node* temp = q.front();
      q.pop();
      if( temp != NULL)
      {
          if(temp->left == NULL && temp->right == NULL)
          {
              mp[count]++;
          }
          
          if(temp->left)
          {
              q.push(temp->left);
          }
          if(temp->right)
          {
              q.push(temp->right);
          }
      }
      else if(temp == NULL)
      {
          if( !q.empty())
          {
              q.push(NULL);
          }
          count++;
      }
      
    }
    for(auto x:mp)
    {
        cout << x.first << " " << x.second << " " << "$";
    }
    
}
