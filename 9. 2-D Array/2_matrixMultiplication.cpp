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

// Time complexity: O(row1*col2*col1)
// Space complexity: O(row1*col2)
void matrixMultiplication(int rows1, int cols1, int m1[][10], int rows2, int cols2, int m2[][10])
{
    int ans[10][10] = {0};
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            for (int k = 0; k < cols1; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    printMatrix(rows1, cols2, ans);
    return;
}

int main()
{
    int rows1, cols1, rows2, cols2, matrix1[10][10], matrix2[10][10];
    cout << "Enter number of rows and columns of first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter number of rows and columns of second matrix: ";
    cin >> rows2 >> cols2;
    if (cols1 != rows2)
    {
        cout << "Matrix multiplication not possible";
        return 0;
    }
    cout << "Enter matrix 1: ";
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            cin >> matrix1[i][j];
    cout << "Enter matrix 2: ";
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            cin >> matrix2[i][j];

    cout << "Matrix multiplication result: " << endl;
    matrixMultiplication(rows1, cols1, matrix1, rows2, cols2, matrix2);
    return 0;
}