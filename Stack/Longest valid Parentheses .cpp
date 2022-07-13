class Solution{
public:
    int maxLength(string S){
        // code here
        int i;
        stack<int>st;
        st.push(-1);
        int ans = 0;
        for(i=0;i<S.length();i++)
        {
            if(S[i] == '(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if(!st.empty())
                {
                    ans = max(ans,i-st.top());
                }
                else
                {
                    st.push(i);
                }
            }
        }
        return ans;
    }
};
