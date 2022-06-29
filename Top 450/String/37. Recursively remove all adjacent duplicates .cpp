
class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        // code here.
        int i;
        string v = "";
        for(i=0;i<s.size();i++)
        {
            if(s[i] != s[i+1])
            {
                v.push_back(s[i]);
            }
            
        }
        return v;
    }
};
