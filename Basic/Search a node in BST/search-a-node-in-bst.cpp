//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

bool search(Node *root, int x);

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;

        cout << search(root, s);
        cout << endl;
    }
}

// } Driver Code Ends


// Function to search a node in BST.

void dfs(Node* root, int x , bool &flag)
{
    if(root == NULL)
    {
        return;
    }
    if(root->data == x)
    {
        flag = true;
        return;
    }
    if(root->data > x)
    {
        dfs(root->left,x,flag);
    }
    else
    {
        dfs(root->right,x,flag);
    }
}


bool search(Node* root, int x) {
    // Your code here
    bool flag = false;
    dfs(root,x,flag);
    if(flag == true)
    {
        return true;
    }
    return false;
    
}
