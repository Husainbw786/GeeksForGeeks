vector<int> leftView(Node *root)
{
   // Your code here
   queue<Node*>q;
   vector<int>v;
   if(root == NULL)
   {
       return v;
   }
   q.push(root);
   while(!q.empty())
   {
       int size = q.size();
       for(int i=0;i<size;i++)
       {
           Node* temp = q.front();
           q.pop();
           if(i == 0)
           {
               v.push_back(temp->data);
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
   }
   return v;
   
}
