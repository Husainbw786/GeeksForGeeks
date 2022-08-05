class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        //Your code here
       vector<int>v;
       if(!root)return v;
       queue<Node*>q;
       q.push(root);
       v.push_back(root->data);
       while(!q.empty()){
           int size=q.size();
           while(size--){
               Node* temp=q.front();
               q.pop();
               if(temp->left){
                   v.push_back(temp->left->data);
                   q.push(temp->left);
               }
               else v.push_back(-1);
               if(temp->right){
                   v.push_back(temp->right->data);
                   q.push(temp->right);
               }
               else v.push_back(-1);
           }
       }
       return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       if(A.size()==0)
       return NULL;
       Node* root=new Node(A[0]);
       queue<Node*>q;
       q.push(root);
      int i=1;
      while(!q.empty()){
          int size=q.size();
          while(size--){
              Node* temp=q.front();
              q.pop();
              if(A[i]!=-1){
                  temp->left=new Node(A[i++]);
                  q.push(temp->left);
              }
              else 
              i++;
              if(A[i]!=-1){
                  temp->right=new Node(A[i++]);
                  q.push(temp->right);
              }
              else
              i++;
          }
      }
      return root;
    }

};
