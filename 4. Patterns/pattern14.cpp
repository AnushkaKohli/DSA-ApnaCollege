//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

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
        for (int col = 1; col <= numOfSpaces; col++)
            cout << "  ";

        for (int col = row; col > 1; col--)
            cout << col << " ";

        for (int col = 1; col <= row; col++)
            cout << col << " ";

        cout << endl;
    }
    return 0;
}