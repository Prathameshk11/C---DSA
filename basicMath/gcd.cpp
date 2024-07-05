#include<iostream>
using namespace std;

int calcGCD(int n, int m){
    if(m==0){
        cout<<n;
        return n;
    }
    return calcGCD( m, n%m);
}
int main() {
    calcGCD(4,20);
    return 0;
}