class Solution
{
    public:
    
    void Solve(string temp,int oc,int cc ,int n ,vector<string>&v)
    {
        if(oc == n && cc == n)
        {
            v.push_back(temp);
            return;
        }
        if(oc < n)
        {
            Solve(temp+"(", oc+1,cc,n,v);
        }
        if(cc < oc)
        {
            Solve(temp+")",oc,cc+1,n,v);
        }
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>v;
        int open_c = 0;
        int close_c = 0;
        Solve("",open_c,close_c,n,v);
        return v;
    }
};
