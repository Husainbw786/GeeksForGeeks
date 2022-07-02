// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    if(s.size() %2 !=0 && s.size() != 1)
    {
        s.pop();
    }
    int x = s.top();
    s.pop();
    
    while(!s.empty())
    {
        if(s.top() != x+1 && s.top() != x-1)
        {
            return false;
        }
        else
        {
            x = s.top();
            s.pop();
        }
    }
    return true;
}
