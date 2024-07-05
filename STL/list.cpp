#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    list<int> ls;

    ls.push_back(3);
    ls.emplace_back(5);

    ls.push_front(7);

    ls.emplace_front(9);

    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout<<*(it)<<" ";
    }cout<<endl;
    

    return 0;
}