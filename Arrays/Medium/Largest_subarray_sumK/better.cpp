 int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<long long , int> presum;
        int maxLen= 0 ;
        int sum=0;
        long long rem=0;
        for(int i =0 ; i<N ; i++){
            sum+=A[i];
            
            if(sum==K){
                maxLen =max(maxLen,i+1) ;
            }
            
             rem = sum-K;
            
            if(presum.find(rem)!=presum.end()){
                int Len= i -presum[rem];
                maxLen=max(maxLen , Len);
            }
            
            if(presum.find(rem)==presum.end()){
                presum[sum]=i;
            }
        }
        return maxLen;