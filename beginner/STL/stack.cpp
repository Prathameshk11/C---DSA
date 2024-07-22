#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    st.push(4);    //{4}
    st.push(3);     //{4,3}
    st.emplace(2);    //{4,3,2}

    cout<<st.top();  //top element
     
    st.pop();  // {3,2}

    cout<<st.size();
    cout<<st.empty();  //false

    stack<int>st1,st2;
    st1.swap(st2);

    return 0;
}