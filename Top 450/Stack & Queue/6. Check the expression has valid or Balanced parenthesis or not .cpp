
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<int>s;
        int i;
        for(i=0;i<x.length();i++)
        {
            if(x[i] == '(' || x[i] == '[' || x[i] == '{')
            {
                s.push(x[i]);
            }
            else if(!s.empty())
            {
                if( (x[i] == ')' && s.top() == '(' ) ||(x[i] == ']' && s.top() == '[' )
                || (x[i] == '}' && s.top() == '{' ))
                {
                    s.pop();
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
        if(s.empty())
        {
            return 1;
        }
        return 0;
    }

};
