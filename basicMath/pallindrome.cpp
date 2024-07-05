#include <iostream>
using namespace std;

bool palindrome(int n) {
    if (n >= 0 && n < 10) {
        return true; // Single-digit numbers are palindromes
    }
    
    int revnum = 0;
    int org = n;
    
    while (n != 0) {
        int lastdig = n % 10;
        revnum = revnum * 10 + lastdig;
        n = n / 10;
    }
    if(revnum==org){
        cout<<true;
    }
    else cout<<false;
    return revnum == org;
}

int main() {
    palindrome(121);
    return 0;
}