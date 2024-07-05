#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int sum{0};
    int lastdigit = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        sum += lastdigit;
        n = n / 10;
    }
    cout << "Sum of digits: " << sum;
}