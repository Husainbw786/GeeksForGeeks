vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int k) {
        long long int i=0,j=0;
        vector<long long int>v;
        queue<long long int >q;
        while(j<N)
        {
            if(A[j] < 0)
            {
                q.push(A[j]);
            }
            if(j-i+1 == k)
            {
                if(q.size() > 0)
                {
                    v.push_back(q.front());
                }
                else
                {
                    v.push_back(0);
                }
                if(A[i] == q.front())
                {
                    q.pop();
                }
                i++;
            }
            j++;
        }
        return v;
        
 }
