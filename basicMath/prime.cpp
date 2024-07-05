#include <iostream>
using namespace std;

bool isPrime(int n)
{  int count=0;
	for (int i=1;i<n;i++){
          if (n % i == 0) {
			  count+=1;
          } 
		  
        }
		if(count==1){
			  cout<<"Yes";
		  }
		  else cout<<"NO";
}

int main() {
    isPrime(20);
    return 0;
}