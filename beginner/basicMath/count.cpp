#include <iostream>
using namespace std;

int countDigits(int n){
int count=0;
int a=n;
	while(n>0){
		int b=n%10;
		if(a%b==0){
			count++;
		}
		n/10;
	}
	cout<<count;
}
int main() {
    countDigits(123);
    return 0;
}