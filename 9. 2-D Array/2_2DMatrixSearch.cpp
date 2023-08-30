// Given a nxm matrix. Write an algorithm to find that the given value exists in the matrix or not.
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

#include <iostream>
using namespace std;

// Time complexity: O(n+m)
// Space complexity: O(1)
void matrixSearch(int arr[][10], int rows, int cols, int target)
{
    // Start from top right corner
    int currentRow = 0, currentColumn = cols - 1;
    while (currentRow < rows && currentColumn >= 0)
    {
        if (arr[currentRow][currentColumn] == target)
        {
            cout << "Element found at: " << currentRow << ", " << currentColumn << endl;
            return;
        }
        else if (target < arr[currentRow][currentColumn])
            currentColumn--;
        else
            currentRow++;
    }
    cout << "Element not found" << endl;
}

int main()
{
    int rows, cols, arr[10][10], target;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    cout << "Enter elements: ";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];

    cout << "Enter the target element to be searched: ";
    cin >> target;
    matrixSearch(arr, rows, cols, target);
    return 0;
}