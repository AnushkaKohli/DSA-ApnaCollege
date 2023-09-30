// Count the number of paths possible in a maze

#include <iostream>
using namespace std;

// Time complexity: O(2^n)
// Space complexity: O(2^n)
int countPathMaze(int size, int i, int j)
{
    if (i == size - 1 && j == size - 1)
        return 1;
    if (i >= size || j >= size)
        return 0;
    return countPathMaze(size, i + 1, j) + countPathMaze(size, i, j + 1);
}

int main()
{
    int size;
    cout << "Enter the size of the square maze: ";
    cin >> size;
    cout << "The number of paths possible are: " << countPathMaze(size, 0, 0) << endl;
    return 0;
}