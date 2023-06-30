//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node* reverse(Node* head)
    {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* rev = reverse(head);
        Node* ans = new Node(0);
        Node* x = ans;
        bool flag = false;
        int carry = 0;
        while(rev)
        {
           if(!flag)
           {
               int sum = rev->data + 1;
               sum += carry;
               carry = sum / 10;
               ans->next = new Node(sum % 10);
               flag = true;
           }
           else
           {
               int sum = rev->data;
               sum += carry;
               carry = sum / 10;
               ans->next = new Node(sum % 10); 
           }
           ans = ans->next;
           rev = rev->next;
        }
        if(carry == 1)
        {
            ans->next = new Node(carry);
            ans = ans->next;
        }
        
        Node* temp = reverse(x->next);
        return temp;
    
    }
};


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends