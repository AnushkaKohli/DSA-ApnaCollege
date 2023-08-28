// Given an array a[] of size n. Print the sum of each subarray of the given array.

#include <iostream>
using namespace std;

void sumOfSubarray(int size, int arr[])
{
    for (int startIndex = 0; startIndex < size; startIndex++)
    {
        int sum = 0;
        for (int endIndex = startIndex; endIndex < size; endIndex++)
        {
            sum += arr[endIndex];
            cout << "Sum of subarray from " << startIndex << " to " << endIndex << " is " << sum << endl;
        }
    }
    return;
}

int main()
{
    int numOfElements, arr[10];
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> arr[i];
    cout << "Sum of each subarray of the given array is: " << endl;
    sumOfSubarray(numOfElements, arr);
    return 0;
}