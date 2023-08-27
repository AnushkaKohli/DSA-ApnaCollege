#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
        fact *= i;
    return fact;
}

int main()
{
    int n, r;
    cout << "Enter the values of n and r: ";
    cin >> n >> r;
    int ncr = (factorial(n)) / (factorial(r) * factorial(n - r));
    cout << "The value of nCr = " << ncr << endl;
    return 0;
}