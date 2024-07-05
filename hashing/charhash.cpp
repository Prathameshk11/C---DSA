#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s; 
    int hash[256]={0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]+=1;
    }
    int q;
    cout<<"Enter number of times you want to ask for occurance :"<<endl;
    cin>>q;
    while (q--)
    {
        char ch;
        cout<<"Enter character whose freq you want to find :"<<endl;
        cin>>ch;
        cout<<"Frequency of "<<ch<<" is: "<<hash[ch]<<endl;
    }
    
    return 0;
}