// PROBLEM
// Given an array arr[] of size N. The task is to find the first repeating element in an array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.

// CONSTRAINTS
// 1 <= N <= 10^6
// 0 <= Ai <= 10^6

// EXAMPLE
// Input:
// 7
// 1 5 3 4 3 5 6
// Output:
// 2
// EXPLANATION:
// 5 is appearing twice and its first appearance is at index 2 which is less than 3 whose first occurring index is 3.

#include <iostream>
#include <algorithm>
using namespace std;

int firstRepeatingElement(int size, int arr[])
{
    int minimumIndex = size, indexArray[20];
    for (int i = 0; i < 20; i++)
        indexArray[i] = -1;

    for (int i = 0; i < size; i++)
    {
        if (indexArray[arr[i]] != -1)
            minimumIndex = min(minimumIndex, indexArray[arr[i]]);

        else
            indexArray[arr[i]] = i;
    }
    return (minimumIndex == size) ? -1 : minimumIndex + 1;
}

int main()
{
    int numOfElements, arr[10];
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> arr[i];
    if (firstRepeatingElement(numOfElements, arr) == -1)
        cout << "No repeating element found" << endl;
    else
        cout << "Index of first repeating element is: " << firstRepeatingElement(numOfElements, arr) << endl;
    return 0;
}