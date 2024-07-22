#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of elements to be entered : "<<endl;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number :";
        cin>>a[i];
    }
    int hash[n]={0};
    for (int i = 0; i < n; i++)
    {
        hash[a[i]]+=1;
    }
    
    int q;
    cout<<"Enter number of times you want to ask occurance :"<<endl;
    cin>>q;
    while (q--)
    {   int num;
        cout<<"Enter the value for which you want occurance for :"<<endl;
        cin>>num;
        cout<<" Number of occurance of "<<num<<" is: "<<hash[num]<<endl;
    }
    
    return 0;
}