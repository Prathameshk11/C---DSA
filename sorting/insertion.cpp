#include <iostream>
using namespace std;

int insertion_sort(int arr[],int n){
    
    for (int i=0; i<=n-1;i++){
        {    int j=i;
            while(j>0 && arr[j-1]>arr[j])
            {
                swap(arr[j],arr[j-1]);
                j--;
            }
            
        }
    }
}
int main() {
    int n;
    cout<<"Enter a size of array :";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element :"<<endl;
        cin>>arr[i];
    }
    
    insertion_sort( arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}