#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter length of array: "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    map<int ,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]+=1;
    }
    int q;
    cout<<"Enter number of times you want to ask for ocurrance :"<<endl;
    cin>>q;
    while (q--)
    {
        int num;
        cout<<"Enter number whose occurance you want to find :"<<endl;
        cin>>num;
        cout<<"Frequency of "<<num<<" is : "<<mpp[num]<<endl;
    }
    
    
    return 0;
}