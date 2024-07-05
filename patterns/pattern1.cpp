#include<iostream>
using namespace std;



//Pattern1 : 
// ****
// ****
// ****
// ****
void pattern1(int n) {
     for (int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        cout<<endl;
    }
}

//Pattern2 : 
// *
// **
// ***
// ****
void pattern2(int n){
    for(int i=0;i<n;i++){
			for (int j=0;j<=i;j++)
            {
				cout<<"*";
			}
			cout<<endl;
		}
}

//Pattern3 : 
// 1
// 12
// 123
// 1234
void pattern3(int n){
    for(int i=1;i<=n;i++){
              for (int j = 1; j <= i; j++) {
                cout << j<<" ";
              }
              cout << endl;
            }
    }

//Pattern4 : 
// 1
// 22
// 333
// 4444
void pattern4(int n){
    for(int i=1;i<=n;i++){
			for (int j=1;j<=i;j++)
            {
				cout<<i<<" ";
			}
			cout<<endl;
		}
    }

//Pattern5 : 
// ****
// ***
// **
// *
void pattern5(int n){
    for(int i=n;i>=0;i--){
			for (int j=0;j<i;j++)
            {
				cout<<"* ";
			}
			cout<<endl;
		}
}

//Pattern6 : 
// 1234
// 123
// 12
// 1
void pattern6(int n){
    for(int i=n;i>=0;i--){
			for (int j=1;j<=i;j++)
            {
				cout<<j<<" ";
			}
			cout<<endl;
		}
    }

//Pattern7 : 
//     *
//    ***
//   *****
//  *******
void pattern7(int n){
    for (int i=0;i<n;i++){

        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for (int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }cout<<endl;
    }
    }

//Pattern8 : 
//  *******
//   *****
//    ***
//     *
void pattern8(int n){
    for (int i=0;i<n;i++){

        for (int j=0;j<i;j++){
            cout<<" ";
        }
        for (int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for (int j=0;j<i;j++){
            cout<<" ";
        }cout<<endl;
    }
    }

//Pattern9 : 
//     *
//    ***
//   *****
//  *******
//  *******
//   *****
//    ***
//     *
void pattern9(int n){
    pattern7(n);
    pattern8(n);
    }

//Pattern10 : 
//  *
//  **
//  ***
//  ****
//  ***
//  **
//  *

void pattern10(int n){
    for (int i=0;i<2*n-1;i++){
        int star=i;
        if(i>=n)  star=2*n-i-2;
        
        for (int j=0;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){

   pattern10(4);
  
   return 0;

}
