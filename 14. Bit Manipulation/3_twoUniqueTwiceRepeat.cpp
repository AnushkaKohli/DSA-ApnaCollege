// Write a program to find 2 unique numbers in an array where all numbers except two, are present twice.

#include <iostream>
using namespace std;

int setBit(int number, int position)
{
    return ((number & (1 << position)) != 0);
}

void uniqueTwo(int size, int arr[], int *uniqueNum1, int *uniqueNum2)
{
    int xorsum = 0;
    for (int i = 0; i < size; i++)
        xorsum = xorsum ^ arr[i];

    int setbit = 0, positionOfSetbit = 0, tempXorsum = xorsum;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        xorsum = xorsum >> 1;
        positionOfSetbit++;
    }
    *uniqueNum1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (setBit(arr[i], positionOfSetbit - 1))
            *uniqueNum1 = *uniqueNum1 ^ arr[i];
    }
    *uniqueNum2 = tempXorsum ^ *uniqueNum1;
    return;
}

int main()
{
    int size, arr[10];
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int unqiueNum1, uniqueNum2;
    uniqueTwo(size, arr, &unqiueNum1, &uniqueNum2);
    cout << "The unique numbers are: " << unqiueNum1 << " and " << uniqueNum2 << endl;
    return 0;
}
