#include <iostream>
using namespace std;

void printMatrix(int rows, int cols, int arr[][10])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return;
}

// Time complexity: O(n^2)
// Space complexity: O(1)
void transposeMatrix(int rows, int cols, int arr[][10])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < cols; j++)
            swap(arr[i][j], arr[j][i]);
    }
    printMatrix(rows, cols, arr);
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
    cout << "Transpose of the matrix is: " << endl;
    transposeMatrix(rows, cols, arr);
    return 0;
}