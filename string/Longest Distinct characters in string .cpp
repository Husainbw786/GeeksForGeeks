int longestSubstrDistinctChars (string s)
{
    // your code here
    set<char>st;
    int i=0;
    int j = 0;
    int res = 0;
    while(j<s.length())
    {
        if(st.find(s[j]) == st.end())
        {
            st.insert(s[j]);
            j++;
            int size = st.size();
            res = max(res,size);
        }
        else
        {
            st.erase(s[i]);
            i++;
        }
    }
    return res;
    
}
