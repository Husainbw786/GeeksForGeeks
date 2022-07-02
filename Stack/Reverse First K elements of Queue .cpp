queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int>s;
    queue<int>ans;
    while(k>0)
    {
        s.push(q.front());
        q.pop();
        k--;
    }
    while(!s.empty())
    {
        ans.push(s.top());
        s.pop();
    }
    while(!q.empty())
    {
        ans.push(q.front());
        q.pop();
    }
    return ans;
}
