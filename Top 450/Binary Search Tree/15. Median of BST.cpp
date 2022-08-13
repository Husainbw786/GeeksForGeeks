void Solve(Node* root,int & count)
{
    if(root == NULL)
    {
        return;
    }
    Solve(root->left,count);
    count++;
    Solve(root->right,count);
}

void func(Node* root,Node* &curr, Node* &prev, int &c, int x, int&f)
{
    if(root == NULL)
    {
        return;
    }
    func(root->left,curr,prev,c,x,f);
    if(prev == NULL)
    {
        prev = root;
        c++;
    }
    else if(c == x)
    {
        c++;
        curr = root;
        f=1;
        return;
    }
    else if(f == 0)
    {
        c++;
        prev = root;
    }
    func(root->right,curr,prev,c,x,f);
}

float findMedian(struct Node *root)
{
      //Code here
      
     int  count = 0;
      Solve(root,count);
      Node* curr = NULL;
      Node* prev = NULL;
      int c = 1;
      int x = (count/2)+1;
      int f = 0;
      func(root,curr,prev,c,x,f);
      if(count&1)
      {
          float ans = (curr->data)*1.0;
          return ans;
      }
      else
      {
          float ans = ( (curr->data + prev->data)*1.0 ) / (2*1.0);
          return ans;
      }
}
