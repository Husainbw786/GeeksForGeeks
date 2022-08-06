void printCorner(Node *root)
{

// Your code goes here
    vector<int>v;
 
    queue<Node*>q;
    q.push(root);
    while(! q.empty())
    {
       
        int size = q.size();
        for(int i=0;i<size;i++)
        {
             Node* temp = q.front();
             q.pop();
             if( i == 0 || i == size-1)
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
    for(int i=0; i<v.size();i++)
    {
        cout << v[i] << " ";
    }
