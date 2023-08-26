// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= (n + 1) - row; col++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}