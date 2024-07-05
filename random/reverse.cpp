#include <iostream>
using namespace std;

int reverse_number(int n)
{
    int reverse = 0;
    int a;
    while (n > 0)
    {
        a = n % 10; 
        reverse = a + reverse * 10;
        n = n / 10;
    }
    cout << "Reversed Number is :"<<reverse << endl;
}
int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    reverse_number(n);
    return 0;
}