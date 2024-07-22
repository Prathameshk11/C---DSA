#include <iostream>
using namespace std;

// pattern18:
//  D
//  CD
//  BCD
//  ABCD
void pattern18(int n){
    
        for (int i = 0; i < n; i++) {
        char ch = 'A' + n - 1 ;
        for (int j = 0; j < i + 1; j++) { 
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

// pattern19:
//  ******
//  **  **
//  *    *
//  *    *
//  **  **
//  ******
void pattern19(int n) {
    int space=0;
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<space;j++){
            cout<<" ";
           
        }
        for (int j = 0; j < n-i; j++) {
            cout << "*";
        }
         space += 2;
        cout << endl;
    }
    int sp=2*n-2;
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<sp;j++){
            cout<<" ";
           
        }
        for (int j = 0; j <=i; j++) {
            cout << "*";
        }
         sp -= 2;
        cout << endl;
    }
}
// pattern20:
//  *    *
//  **  **
//  ******
//  **  **
//  *    *
void pattern20(int n) {

    for(int i =1;i<2*n;i++){
            int stars=i;
            if (i>n) stars=2*n-i;
        for(int j = 1; j <= stars; j++){
            cout<<"*";
        }
        for(int j=0;j<2*(n-stars);j++){
            cout<<" ";
           
        }
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// pattern21:
//  * * * * *
//  *       *
//  *       *
//  *       *
//  * * * * *
void pattern21(int n) {

    for(int i =0;i<n;i++){
            
        for(int j = 0; j <n; j++){
            if ( i==0 || i==n-1 || j==0 || j==n-1) 
            cout<<"*";
            else
            cout<<" ";
           
        }
        
        cout << endl;
    }
}
int main() {
    int n=4;
    pattern21(n);
    return 0;
}