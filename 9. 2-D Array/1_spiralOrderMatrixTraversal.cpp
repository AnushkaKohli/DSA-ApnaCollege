#include <iostream>
using namespace std;

void spiralOrder(int rows, int cols, int arr[][10])
{
    int row_start = 0, row_end = rows - 1, col_start = 0, col_end = cols - 1;
    while (row_start <= row_end && col_start <= col_end)
    {
        // for row_start
        for (int col = col_start; col <= col_end; col++)
            cout << arr[row_start][col] << " ";
        row_start++;

        // for col_end
        for (int row = row_start; row <= row_end; row++)
            cout << arr[row][col_end] << " ";
        col_end--;

        // for row_end
        for (int col = col_end; col >= col_start; col--)
            cout << arr[row_end][col] << " ";
        row_end--;

        // for col_start
        for (int row = row_end; row >= row_start; row--)
            cout << arr[row][col_start] << " ";
        col_start++;
    }
    return;
}

int main()
{
    int rows, cols, arr[10][10];
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    cout << "Enter elements: ";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];
    cout << "Spiral order traversal: " << endl;
    spiralOrder(rows, cols, arr);
    return 0;
}