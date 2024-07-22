#include <iostream>
using namespace std;

// pattern11:
// 1
// 01
// 101
// 0101
void pattern11(int n){
        int num=1;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0) num=1;
            else num =0;
            for (int j = 0; j <= i; j++)
            {
                cout<<num;
                num=1-num;
            }
            cout<<endl;
        }
}

// pattern12:
// 1      1
// 12    21
// 123  321
// 12344321
void pattern12(int n){
        
        for (int i = 1; i <= n; i++)
        {
            
            for (int j = 1; j <= i; j++)
            {
                cout<<j;
            }
            for (int j = 1; j <= 2*n-2*i; j++)
            {
                cout<<" ";
            }
            for (int j = i; j >= 1; j--)
            {
                cout<<j;
            }
            cout<<endl;
        }
}

// pattern13:
// 1
// 23
// 456
// 78910
void pattern13(int n){
        int num=1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <i; j++)
            {
                cout<<num;
                num=1+num;
            }
            cout<<endl;
        }
}

// pattern14:
// A
// AB
// ABC
// ABCD
void pattern14(int n){
        for (int i =0; i< n; i++)
        {
            for (char ch = 'A'; ch< 'A'+i; ch++)
            {
                cout<<ch;
            }
            cout<<endl;
        }
}

// pattern15:
// ABCDE
// ABCD
// ABC
// A
void pattern15(int n){
        for (int i =n; i>=0; i--)
        {
            for (char ch = 'A'; ch< 'A'+i; ch++)
            {
                cout<<ch<<" ";
            }
            cout<<endl;
        }
}

// pattern16:
// A
// BB
// CCC
// DDDD
void pattern16(int n){
    char ch='A';
        for (int i =0; i<n; i++)
        {
            for ( int j=0; j<= i; j++)
            {
                cout<<ch<<" ";
                
            }
            cout<<endl;
            ch++;
        }
}

// pattern17:
//     A
//    ABA
//   ABCBA
//  ABCDCBA
void pattern17(int n){
    
        for (int i =0; i<n; i++)
        {
            for ( int j=0; j< n-i-1; j++)
            {
                cout<<" ";
            }
            char ch='A';
            int breakpoint=(2*i-1)/2;
            for ( int j=0; j< 2*i+1; j++)
            {
                cout<<ch<<" ";
                if(j<=breakpoint) ch++;
                else ch--;
            }
            for ( int j=0; j< n-i-1; j++)
            {
                cout<<" ";
            }
            cout<<endl;
            
        }
}
int main() {
    int n=4;
    pattern17(n);
    return 0;
}