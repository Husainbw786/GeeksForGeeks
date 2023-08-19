//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	if(head == NULL)
	{
	  	Node* temp = new Node(x);
	  	return temp;
	}
	int count = 0;
	Node* itr = head;
	while(itr)
	{
	    count++;
	    itr = itr->next;
	}
	
	
	
	Node* prev = NULL;
	Node* slow = head;
	Node* fast = head;
	
	while(fast && fast->next)
	{
	    prev = slow;
	    slow = slow->next;
	    fast = fast->next->next;
	}
	
	Node* temp = new Node(x);
	
	if(count % 2 != 0)
	{
	   	temp->next = slow->next;
    	slow->next = temp;
    	return head; 
	}
	prev->next = temp;
	temp->next = slow;
	return head;

	
}