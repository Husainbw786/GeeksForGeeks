bool isCousins(Node *root, int a, int b)
{
   //add code here.
   queue<Node*>q;
   int f1 = 0, f2 = 0;
   q.push(root);
   while(! q.empty())
   {
       int size = q.size();
       for(int i=0;i<size;i++)
       {
           Node* temp =  q.front();
           q.pop();
           if(temp->left && temp->right)
           {
               if(temp->left->data == a && temp->right->data == b)
               {
                   return false;
               }
               
               if(temp->left->data == b && temp->right->data == a)
               {
                   return false;
               }
           }
           if(temp->data == a)
           {
               f1 = 1;
           }
           if(temp->data == b)
           {
               f2 = 1;
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
       if(f1 && f2)
       {
           return true;
       }
       if(f1 || f2)
       {
           return false;
       }
   }
    return false;
}
