//    1 2 3 4 5
// 1  1
// 2  0 1
// 3  1 0 1
// 4  0 1 0 1
// 5  1 0 1 0 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if ((row + col) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}