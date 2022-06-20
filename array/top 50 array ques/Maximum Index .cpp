class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        int diff = -1;
        for(int i = 0; i < N; i++){
            for(int j = N-1; j >= i; j--){
                if(A[i] <= A[j] ){
                    diff = j-i;
                    break;
                }
                if(diff != -1 && j-i <= diff)
                    break;
            }
            if(diff != -1 && (N-1)-i <= diff)
                break;
        }
        return diff;
    }
};
