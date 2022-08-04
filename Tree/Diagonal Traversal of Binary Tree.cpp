
vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>ans;
   queue<Node*>q;
   q.push(root);
   while(! q.empty())
   {
       Node* temp = q.front();
       q.pop();
       while(temp!= NULL)
       {
           ans.push_back(temp->data);
           if(temp->left)
           {
               q.push(temp->left);
           }
           temp = temp->right;
       }
   }
   return ans;
   
}
