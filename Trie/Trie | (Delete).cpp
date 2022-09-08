class Solution{
  public:
  void deleteKey(trie_node_t *root, char key[])
  {
    //Code here
    int n = strlen(key);
    int i;
    for(i=0;i<n;i++)
    {
        root = root->children[key[i]-'a'];
        
    }
    root->value = 0;
  }
};
