//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};



float findMedian(struct Node* node);

// Function to Build Tree
Node* buildTree(string str)
{
   // Corner Case
   if(str.length() == 0 || str[0] == 'N')
       return NULL;

   // Creating vector of strings from input
   // string after spliting by space
   vector<string> ip;

   istringstream iss(str);
   for(string str; iss >> str; )
       ip.push_back(str);

   // Create the root of the tree
   Node* root = new Node(stoi(ip[0]));
 
   // Push the root to the queue
   queue<Node*> queue;
   queue.push(root);

   // Starting from the second element
   int i = 1;
   while(!queue.empty() && i < ip.size()) {

       // Get and remove the front of the queue
       Node* currNode = queue.front();
       queue.pop();

       // Get the current node's value from the string
       string currVal = ip[i];

       // If the left child is not null
       if(currVal != "N") {

           // Create the left child for the current node
           currNode->left = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->left);
       }

       // For the right child
       i++;
       if(i >= ip.size())
           break;
       currVal = ip[i];

       // If the right child is not null
       if(currVal != "N") {

           // Create the right child for the current node
           currNode->right = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}

int main() {
  
   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   //cout << t << endl;
   while(t--)
   {
        string s; 
       getline(cin, s);
       Node* root = buildTree(s);

      // getline(cin, s);
       
        cout << findMedian(root) << endl;

      // cout<<"~"<<endl;
   }
   return 0;
}
// } Driver Code Ends


/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function
// Function should return median of the BST
void Solve(Node* root,int & count)
{
    if(root == NULL)
    {
        return;
    }
    Solve(root->left,count);
    count++;
    Solve(root->right,count);
}

void func(Node* root,Node* &curr, Node* &prev, int &c, int k, int&f)
{
    if(root == NULL)
    {
        return;
    }
    func(root->left,curr,prev,c,k,f);
    if(prev == NULL)
    {
        prev = root;
        c++;
    }
    else if(c == k)
    {
        c++;
        curr = root;
        f=1;
        return;
    }
    else if(f == 0)
    {
        c++;
        prev = root;
    }
    func(root->right,curr,prev,c,k,f);
}

float findMedian(struct Node *root)
{
      //Code here
      
     int  count = 0;
      Solve(root,count);
      Node* curr = NULL;
      Node* prev = NULL;
      int c = 1;
      int x = (count/2)+1;
      int f = 0;
      func(root,curr,prev,c,x,f);
      if(count&1)
      {
          float ans = (curr->data)*1.0;
          return ans;
      }
      else
      {
          float ans = ( (curr->data + prev->data)*1.0 ) / (2*1.0);
          return ans;
      }
   
         
}

