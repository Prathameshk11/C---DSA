class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
       int larg= arr[0];
        int sec_larg= -1;
        int n=arr.size();
        for(int i=1 ; i<n; i++){
            if(arr[i]>larg){
                sec_larg = larg;
                larg = arr[i];
            }
            else if(arr[i]<larg && arr[i]>sec_larg){
                sec_larg=arr[i];
            }
        }
        return sec_larg;
    }
};