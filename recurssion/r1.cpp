#include <iostream>
#include<string>
using namespace std;


void name(int i,int n ){
    if (i>n)
    {
        return ;
    }
    cout<<"Prats ";
    name(i+1,n );
}
int main() {
    name(1,4);
    return 0;
}