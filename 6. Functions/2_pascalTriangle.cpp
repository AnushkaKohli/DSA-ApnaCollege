// Pascal Triangle
// 1                0C0
// 1 1              1C0 1C1
// 1 2 1            2C0 2C1 2C2
// 1 3 3 1          3C0 3C1 3C2 3C3
// 1 4 6 4 1        4C0 4C1 4C2 4C3 4C4
// 1 5 10 10 5 1    5C0 5C1 5C2 5C3 5C4 5C5

#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1; // 0! = 1! = 1 (base case
    int fact = 1;
    for (int i = 2; i <= num; i++)
        fact *= i;
    return fact;
}

int nCr(int n, int r)
{
    return (factorial(n)) / (factorial(r) * factorial(n - r));
}

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col <= row; col++)
            cout << nCr(row, col) << " ";
        cout << endl;
    }
    return 0;
}