
class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        int count = 0;
        int i;
        for(i=0;i<n;i++)
        {
            if(arr[i] == 'P')
            {
                int j = max(0,i-k);
                bool flag = true;
                for(int run = j;run<i;run++)
                {
                    if(arr[run] == 'T')
                    {
                        arr[run] = 'C';
                        count++;
                        flag = false;
                        break;
                    }
                }
                if(flag)
                {
                    j = min(i+k,n);
                    for(int run =i+1; run<=j;run++)
                    {
                        if(arr[run] == 'T')
                        {
                            arr[run] = 'C';
                            count++;
                            flag = false;
                            break;
                        }
                    }
                }
            }
        }
        return count;
    }
};
