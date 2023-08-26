//         *
//       * *
//     * * *
//   * * * *
// * * * * *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        int numOfSpaces = n - row;
        int numOfCol = row;
        for (int col = 1; col <= numOfSpaces; col++)
            cout << "  ";
        for (int col = 1; col <= numOfCol; col++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}