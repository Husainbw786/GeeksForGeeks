class Solution{
public:
    int heapHeight(int N, int arr[]){
        // code here
        int count = 0;
        while(N != 1)
        {
            N = N/2;
            count++;
        }
        return count;
    }
};
