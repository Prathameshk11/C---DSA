
#include <iostream>
#include<vector>
using namespace std;

int factorialNumbers(long long n) {

    if(n==0){  
    return 1;
    }
    return factorialNumbers(n-1)*n;
}

int main() {
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"Factorial of number "<<n<<" is :"<<    factorialNumbers(n);
    return 0;
}