//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list
    
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
    
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
         Node* rev1 = reverse(first);
         Node* rev2 = reverse(second);
         
         Node* temp = new Node(0);
         Node* head = temp;
         if(rev1 == NULL)
         {
             return rev2;
         }
         if(rev2 == NULL)
         {
             return rev1;
         }
         int carry = 0;
         while(rev1 && rev2)
         {
             int sum = 0;
             sum += rev1->data;
             sum += rev2->data;
             sum += carry;
             temp->next = new Node(sum%10);
             temp = temp->next;
             carry =  sum / 10;
             rev1 = rev1->next;
             rev2 = rev2->next;
         }
         
         while(rev1)
         {
             int sum = rev1->data;
             sum += carry;
             carry = sum / 10;
             temp->next = new Node(sum % 10 );
             rev1 = rev1->next;
             temp = temp->next;
         }
         while(rev2)
         {
             int sum = rev2->data;
             sum += carry;
             carry = sum / 10;
             temp->next = new Node(sum % 10);
             rev2 = rev2->next;
             temp = temp->next;
         }
         if(carry == 1)
         {
             temp->next = new Node(carry);
             temp = temp->next;
         }
         Node* ans = reverse(head->next);
         return ans;
         
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends