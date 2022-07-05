
void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size() == n)
	{
	    return true;
	}
	return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.empty();
}

int pop(stack<int>& s){
	// Your code goes here
	int x;
	if(! s.empty())
	{
	    x = s.top();
	    s.pop();
	    return x;
	}
	
}

int getMin(stack<int>& s){
	// Your code goes here
	stack<int>s2;
	int n = s.size();
	s2 = s;
	int min = s2.top();
	while(! s2.empty())
	{
	    if(min > s2.top())
	    {
	        min = s2.top();
	    }
	    s2.pop();
	}
	return min;
	
	
}
