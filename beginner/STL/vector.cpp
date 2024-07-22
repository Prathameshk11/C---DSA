#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    // vector <int> v;

    // v.push_back(0);
    // v.emplace_back(49);
    // cout<<v[1];

    // vector<pair<int,int>>vec;
    // vec.push_back({1,2});
    // vec.emplace_back(1,2);

    // vector<int> v3(5);
    // vector<int>v1(10,3);  //[3,3,3,3,3,3,3,3,3,3]
    // vector<int>v2(v1);
    // v1[4]=9;

    // vector<int>::iterator it =v.begin();  //points to memory address of 1st element
    // it++;
    // cout<<*(it)<<" ";

    // vector<int>::iterator it1 =v.end();  //points to next memory address of  last element

    // cout<<v.back()<<" ";  //last element

    // for (vector<int>::iterator it=v1.begin();it!=v1.end();it++){
    //     cout<<*(it)<<" ";
    // }

    // for (auto it = v.begin(); it != v.end(); it++){
    //     cout<<*(it);
    // }
    vector <int>ve={6,8,3,8,8};

    ve.erase(ve.begin()+1);   //6 3 8 8
    for (auto it = ve.begin(); it != ve.end(); it++){
        cout<<*(it)<<" ";
    }cout<<endl;  

    ve.erase(ve.begin()+2,ve.begin()+3);  //6 3 8
    for (auto it = ve.begin(); it != ve.end(); it++){
        cout<<*(it)<<" ";
    }cout<<endl;

    ve.insert(ve.begin(),30);   //30 6 3 8
    for (auto it = ve.begin(); it != ve.end(); it++){
        cout<<*(it)<<" ";
    }cout<<endl;

    ve.insert(ve.begin(),4) ; //4 30 6 3 8
    for (auto it = ve.begin(); it != ve.end(); it++){
        cout<<*(it)<<" ";
    }cout<<endl;

    ve.insert(ve.begin()+1,2,8);  //4 8 8 30 6 3 8
    for (auto it = ve.begin(); it != ve.end(); it++){
        cout<<*(it)<<" ";
    }cout<<endl;

    vector<int>copy{3,3,45,4};
    ve.insert(ve.begin(),copy.begin(),copy.end());

    cout<<ve.size();
    ve.pop_back();

    ve.swap(copy);  

    ve.clear(); //erases entire vector
    return 0;
}