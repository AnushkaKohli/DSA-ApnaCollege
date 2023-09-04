#include <iostream>
using namespace std;

bool isArraySorted(int size, int arr[])
{
    if (size == 1)
        return true;

    return (arr[0] < arr[1] && isArraySorted(size - 1, arr + 1));
}

int main()
{
    int size, arr[10];
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    if (isArraySorted(size, arr))
        cout << "The array is sorted.";
    else
        cout << "The array is not sorted.";
    return 0;
}