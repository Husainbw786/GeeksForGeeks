
//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int>s;
   stack<int>mini;
   int curr_min = arr[0];
   int i;
   for(i=0;i<n;i++)
   {
       s.push(arr[i]);
       if(arr[i]<curr_min)
       {
           curr_min = arr[i];
       }
       mini.push(curr_min);
   }
   return mini;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
