class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        vector <int> vec;
        int maxi=arr[n-1];
        for(int i=n-1 ;i>=0;i--){
            if(arr[i]>=maxi){
                vec.push_back(arr[i]);
                maxi= max(maxi,arr[i]);
            }
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};