// Floyd's Triangle
//  1
//  2  3
//  4  5  6
//  7  8  9  10
//  11 12 13 14 15

#include <iostream>
using namespace std;

int main()
{
    int n, count = 1;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
            cout << count++ << " ";
        cout << endl;
    }
    return 0;
}