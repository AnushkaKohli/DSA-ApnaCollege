// Count the number of paths ossible from start point to end point in a gameboard where number of steps ranges as that of numbers on a dice.

#include <iostream>
using namespace std;

// Time complexity: O(2^n)
// Space complexity: O(2^n)
int countPath(int start, int end)
{
    if (start == end)
        return 1;
    if (start > end)
        return 0;
    int count = 0;
    for (int i = 1; i <= 6; i++)
        count += countPath(start + i, end);
    return count;
}

int main()
{
    int start, end;
    cout << "Enter the start point: ";
    cin >> start;
    cout << "Enter the end point: ";
    cin >> end;
    cout << "The number of paths possible are: " << countPath(start, end) << endl;
    return 0;
}