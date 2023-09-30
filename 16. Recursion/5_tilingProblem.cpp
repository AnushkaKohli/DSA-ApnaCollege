// Given a 2 X n board and tiles of size 2 X 1, count the number of ways to tile the given board using these 2 X 1 tiles.

#include <iostream>
using namespace std;

// Time complexity: O(2^n)
// Space complexity: O(2^n)
int tilingWays(int n)
{
    if (n == 0 || n == 1)
        return n;
    return tilingWays(n - 1) + tilingWays(n - 2);
}

int main()
{
    int n;
    cout << "Enter the size of the board: ";
    cin >> n;
    cout << "The number of ways to tile the board are: " << tilingWays(n) << endl;
    return 0;
}