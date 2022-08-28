class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        
        long long sum = 0;
        int i ;
        for(i=0;i<N;i++)
        {
            sum = sum + Arr[i];
        }
        sort(Arr.begin(),Arr.end());
        int count = 0;
        long long x = 0;
        long long check = 0;
        for(i=0;i<N;i++)
        {
            count++;
            x += Arr[N-i-1];
             check = sum - x;
            if(x > check)
            {
                break;
            }
        }
        return count;
    }
};
