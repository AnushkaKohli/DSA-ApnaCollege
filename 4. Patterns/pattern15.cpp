//     1 2 3 4 5 6 7 8 9
// 1           *
// 2         * * *
// 3       * * * * *
// 4     * * * * * * *
// 5   * * * * * * * * *
// 6   * * * * * * * * *
// 7     * * * * * * *
// 8       * * * * *
// 9         * * *
// 10          *
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    for (int row = 1; row <= 2 * n; row++)
    {
        int numOfSpaces = (row <= n) ? n - row : row - n - 1;
        int numOfStars = (row <= n) ? (2 * row) - 1 : 2 * (2 * n - row) + 1;
        for (int col = 1; col <= numOfSpaces; col++)
            cout << "  ";

        for (int col = 1; col <= numOfStars; col++)
            cout << "* ";

        cout << endl;
    }
    return 0;
}