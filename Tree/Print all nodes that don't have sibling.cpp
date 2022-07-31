
void findsibling(Node* node , vector<int>&v)
{
     if( (node == NULL) || (node->left == NULL) && (node->right == NULL) )
    {
        return;
    }
    if(node->left && node->right == NULL)
    {
        v.push_back(node->left->data);
    }
    
    if(node->right && node->left == NULL)
    {
        v.push_back(node->right->data);
    }
    findsibling(node->left,v);
    findsibling(node->right,v);
}

vector<int> noSibling(Node* node)
{
    // code here
    vector<int>v;
    findsibling(node,v);
    if(v.size() == 0)
    {
        v.push_back(-1);
    }
    sort(v.begin(),v.end());
    return v;
    
   
}
