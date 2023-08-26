//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include <iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    for (row = 1; row <= 2 * n - 1; row++)
    {
        if (row <= n)
        {
            for (col = 1; col < n + 1 - row; col++)
                cout << "  ";
            for (col = n + 1 - row; col <= n - 1 + row; col++)
                cout << "* ";
        }
        else
        {
            for (col = 1; col < (row % n) + 1; col++)
                cout << "  ";
            for (col = (row % n) + 1; col <= (2 * n - 1) - (row % n); col++)
                cout << "* ";
        }
        cout << endl;
    }
    return 0;
}