//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
     Node *reverse(Node *odd)
    {
        Node *curr=odd;
        Node *prev=NULL;
        Node *temp=NULL;
        while(curr!=NULL)
         {
             temp=curr->next;
             curr->next=prev;
             prev=curr;
             curr=temp;
         }
         return prev;
    }
    
    void rearrange(struct Node *odd)
    {
        //add code here
        Node* even  = odd->next ;
        Node* odd_ptr = odd ;
        Node* even_head = even ;
        while(even != NULL && even->next != NULL)
        {
            odd_ptr->next = odd_ptr->next->next;
            even->next = even->next->next;;
            odd_ptr = odd_ptr->next;
            even = even->next;
        }
        even_head = reverse(even_head);
        odd_ptr->next = even_head;
        
    }
};




//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends