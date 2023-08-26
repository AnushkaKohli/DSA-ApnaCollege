// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    for (int row = 1; row <= 2 * n - 1; row++)
    {
        int totalCols = (row <= n) ? row : n - (row % n);
        int numOfSpaces = (row <= n) ? 2 * (n - row) : 2 * (row % n);

        for (int col = 1; col <= totalCols; col++)
            cout << "* ";
        for (int space = 1; space <= numOfSpaces; space++)
            cout << "  ";
        for (int col = 1; col <= totalCols; col++)
            cout << "* ";

        cout << endl;
    }
    return 0;
}