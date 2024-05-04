//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}


// } Driver Code Ends
/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution
{
    public:

    //Function to return a tree created from postorder and inoreder traversals.
    unordered_map<int,int>mp;
    Node* BUILD(int inorder[], int postorder[],int low ,int high, int &index)
    {
        if(low > high)
        {
            return NULL;
        }
        Node* root = new Node(postorder[index]);
        index--;
        if(low == high)
        {
            return root;
        }
        int mid = mp[root->data];
        root->right = BUILD(inorder,postorder,mid+1,high,index);
        root->left = BUILD(inorder,postorder,low,mid-1,index);
        return root;
        
    }

Node *buildTree(int inorder[], int postorder[], int n) {
    // Your code here
    
    
        for(int i=0;i<n;i++)
        {
            mp[inorder[i]] = i;
        }
        int index = n-1;
        Node* ans = BUILD(inorder,postorder,0,n-1,index);
        return ans;
}

};


//{ Driver Code Starts.

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Solution obj;
        Node* root = obj.buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends