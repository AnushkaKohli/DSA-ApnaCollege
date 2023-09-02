// Write a program to find a unique number in an array where all numbers except one, are present twice.

#include <iostream>
using namespace std;

// Time complexity: O(n)
// Space complexity: O(1)
int uniqueOne(int size, int arr[])
{
    int xorsum = 0;
    for (int i = 0; i < size; i++)
        xorsum = xorsum ^ arr[i];
    return xorsum;
}

int main()
{
    int size, arr[10];
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "The unique number is: " << uniqueOne(size, arr) << endl;
    return 0;
}