//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
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
class Solution{
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
    
    struct Node* modifyTheList(struct Node *head)
    {
        Node* slow = head;
        Node* prev;
        Node* fast = head;
        Node* temp1 = head;
        int count = 0;
        while(temp1)
        {
            count++;
            temp1 = temp1->next;
        }
        temp1 = head;
        while(fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* temp2;
        if(count % 2 == 0)
        {
            temp2 = reverse(slow); 
            prev->next = temp2;
        }
        else
        {
            temp2 = reverse(slow->next); 
            slow->next = temp2;
        }
       
       
        
        while(temp2)
        {
            int x = temp1->data; 
            temp1->data = temp2->data - temp1->data;
            temp2->data = x; 
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        Node* temp3;
        if(count % 2 == 0)
        {
            temp3 = reverse(temp1);
            prev->next = temp3;
        }
        else
        {
            temp3 = reverse(temp1->next); 
            temp1->next = temp3;
        }
         
        
        return head;
        
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends