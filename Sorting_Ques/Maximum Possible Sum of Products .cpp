long long MaxSum(long long int A[], long long int B[], long long int N){
    //complete the function here
    
    int i;
    long long int pro = 0 ; 
    sort(A,A+N);
    reverse(A,A+N);
    sort(B,B+N);
    reverse(B,B+N);
    for(i=0;i<N;i++)
    {
        pro = pro + (A[i]*B[i]); 
    }
    return pro;
}
