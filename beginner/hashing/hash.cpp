#include <stdio.h>
#include<iostream>
#include<vector>

vector<int> countFrequency(int n, int x, std::vector<int> &arr) {
   vector<int> freq(x,0);

   for (int i=0;i<n;i++){
       if(arr[i]>=1 && arr[i]<=x)
          freq[arr[i]-1]++;
   }
    return freq;

}

int main()
{   
    int n=5;
    int x=10;
    vector<int> arr={2,3,5,3,1};
    countFrequency(n,x,arr);

    return 0;
}