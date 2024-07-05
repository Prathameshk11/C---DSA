#include <iostream>
using namespace std;

int selection_sort(int arr[],int n){
    
    for (int i=0; i<=n-2;i++){
        int min=i;
        {
            for (int j = i; j <= n-1; j++)
            {
                if(arr[min]>arr[j])
                min=j;
            }
            swap(arr[min],arr[i]);
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
    
    selection_sort( arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}