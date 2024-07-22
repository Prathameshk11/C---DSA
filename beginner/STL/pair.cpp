#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 void explainPair(){

        pair<int,int> p1 ={1,4};
        
        cout<<"first element : "<<p1.first<<" Second element :"<<p1.second<<endl;

        pair<int,pair<int,int>> p2 ={1,{3,5}};

        cout<<"first element : "<<p2.second.first<<" Second element :"<<p2.second.second<<endl;

        pair<int,int> a[]={{1,2},{5,4},{3,2}};

         cout<<"first element in array: "<<a[1].second<<endl;

    }
int main() {
    explainPair();
    return 0;
}