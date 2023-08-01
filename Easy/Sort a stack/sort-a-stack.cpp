//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */

void solve(priority_queue<int,vector<int>,greater<int>>&pq, stack<int>&s)
{
    if(s.size() == 0)
    {
        return;
    }
    pq.push(s.top());
    s.pop();
    solve(pq,s);
    s.push(pq.top());
    pq.pop();
}


void SortedStack :: sort()
{
   //Your code here
   priority_queue<int,vector<int>,greater<int>>pq;
   solve(pq,s);
   
}