class Solution{
  public:
    //Function to construct binary tree from parent array.
    Node *createTree(int parent[], int N)
    {
        // Your code here
        Node* head;
        vector<Node*>arr(N);
        for(int i = 0;i<N;i++)
        {
            arr[i] = new Node(i);
        }
        for(int i=0;i<N;i++)
        {
            if(parent[i] == -1)
            {
                head = arr[i];
            }
            else
            {
                if(arr[parent[i]]->left == NULL)
                {
                    arr[parent[i]]->left = arr[i];
                }
                else
                {
                    arr[parent[i]]->right = arr[i];
                }
            }
        }
        return head;
    }
};
