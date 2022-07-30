void traverse(Node* node, int & count)
{
   if(node == NULL)
   {
       return;
   }
   traverse(node->left,count);
   traverse(node->right,count);
   count++;
   
}
int getSize(Node* node)
{
   // Your code here
   int count = 0;
   traverse(node,count);
   return count;
}
