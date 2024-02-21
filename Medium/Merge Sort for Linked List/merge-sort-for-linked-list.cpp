//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked  node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked  using Merge Sort.
    
     Node* MergeTwo(Node* a, Node* b)
    {
        if(b == NULL)
        {
            return a;
        }
        if(a == NULL)
        {
            return b;
        }
        
        Node* dummy = new Node(0);
        Node* ans = dummy;
        while(a && b)
        {
            if(a->data < b->data)
            {
                dummy->next = new Node(a->data);
                dummy = dummy->next;
                a = a->next;
            }
            else
            {
                dummy->next = new Node(b->data);
                dummy = dummy->next;
                b = b->next; 
            }
        }
        if(a != NULL)
        {
            dummy->next = a;
        }
        if(b != NULL)
        {
            dummy->next = b;
        }
        return ans->next;
    }
    
    Node* mergeSort(Node* head) {
        // your code here
        
         if (head == NULL || head->next == NULL) 
         {
            return head;
         }
        
        Node* slow = head;
        Node* fast = head;
        Node* prev;
        while(fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        Node* l1 = mergeSort(head);
        Node* l2 = mergeSort(slow);
        
        Node* result = MergeTwo(l1,l2);
        return result;
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends