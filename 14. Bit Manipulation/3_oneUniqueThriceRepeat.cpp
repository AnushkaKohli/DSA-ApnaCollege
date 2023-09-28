// Write a program to find a unique number in an array where all numbers except one, are present thrice.

#include <iostream>
using namespace std;

// Time complexity: = O(n^2)
// Space complexity: O(32) = O(1)
int unique(int size, int arr[])
{
    int bitSum[32] = {0};
    for (int i = 0; i < size; i++)
    {
        int currentPosition = 0;
        while (arr[i] > 0)
        {
            bitSum[currentPosition] += arr[i] & 1;
            currentPosition++;
            arr[i] = arr[i] >> 1;
        }
    }
    int uniqueNum = 0;
    for (int i = 0; i < 32; i++)
    {
        bitSum[i] = bitSum[i] % 3;
        uniqueNum += bitSum[i] * (1 << i);
    }
    return uniqueNum;
}

int setBit(int number, int position)
{
    return (number | (1 << position));
}

int getBit(int number, int position)
{
    return (number & (1 << position));
}

int unique2(int size, int arr[])
{
    int uniqueNum = 0;
    for (int i = 0; i < 32; i++)
    {
        int sumAtPosI = 0;
        for (int j = 0; j < size; j++)
        {
            if (getBit(arr[j], i))
                sumAtPosI++;
            if (sumAtPosI % 3 != 0)
                uniqueNum = setBit(uniqueNum, i);
        }
    }
    return uniqueNum;
}

int main()
{
    int size, arr[10];
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "The unique number is: " << unique(size, arr) << endl;
    return 0;
}