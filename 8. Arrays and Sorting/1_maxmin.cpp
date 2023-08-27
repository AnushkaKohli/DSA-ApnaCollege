#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int findMax(int size, int arr[])
{
    int maxNo = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // Method 1
        // if (arr[i] > maxNo)
        //     maxNo = arr[i];

        // Method 2
        // maxNo = arr[i] > maxNo ? arr[i] : maxNo;

        // Method 3
        maxNo = max(arr[i], maxNo);
    }
    return maxNo;
}

int findMin(int size, int arr[])
{
    int min = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int numOfElements, numArray[10], max, min;
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> numArray[i];

    max = findMax(numOfElements, numArray);
    min = findMin(numOfElements, numArray);

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    return 0;
}