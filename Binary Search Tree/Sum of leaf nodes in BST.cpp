 void Solve(Node* r, int & sum)
 {
     if(r == NULL)
     {
         return;
     }
     if(r->left == NULL && r->right == NULL)
     {
         sum += r->data;
     }
     Solve(r->left,sum);
     Solve(r->right,sum);
 }

int sumOfLeafNodes(Node *r ){
     /*Your code here */
     
     int sum = 0;
     Solve(r,sum);
     return sum;
     
}
