// 1 2 3 4 5 6 7
//     * * * * * 1 - 4 spaces
//    * * * * *  2 - 3 spaces
//   * * * * *   3 - 2 spaces
//  * * * * *    4 - 1 space
// * * * * *     5 - 0 spaces

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
            cout << " ";

        for (int col = 1; col <= n; col++)
            cout << "* ";

        cout << endl;
    }
    return 0;
}