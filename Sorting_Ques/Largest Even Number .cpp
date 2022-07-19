class Solution{
    public:
    string LargestEven(string s){
        //complete the function here
        vector<char>v;
        int i;
        for(i=0;i<s.length();i++)
        {
            v.push_back(s[i]);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        
        for(i=s.size()-1;i>=0;i--)
        {
            if(v[i] % 2 == 0)
            {
                while(i != s.size()-1)
                {
                    swap(v[i],v[i+1]);
                    i++;
                }
                  break;
            }
          
        }
        string ans = "";
        for(i=0;i<s.size();i++)
        {
            ans += v[i];
        }
        return ans;
    }  
};
