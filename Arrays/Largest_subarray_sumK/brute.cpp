class Solution{
    public:
int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int len=0;
        for(int i=0 ; i<N ; i++){
               int sum=0;
               
            for(int j=i ; j<N ; j++){
                      sum+=A[j];
                        if(sum==K){
                     len=max(len,j-i+1);
                   }
               }
            }
        return len;
    } 
};
