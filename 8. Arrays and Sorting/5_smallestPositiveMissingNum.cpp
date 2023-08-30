// PROBLEM
// Find the smallest positive missing number in the given array.
// Example: [0, -10, 1, 3, -20], Ans = 2

// CONSTRAINTS
// 1 <= N <= 10^6
// -10^6 <= Ai <= 10^6

#include <iostream>
using namespace std;

int smallestPositiveMissingNumber(int size, int arr[])
{
    bool isPresent[10] = {false};
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
            isPresent[arr[i]] = true;
    }
    for (int i = 0; i < 10; i++)
    {
        if (isPresent[i] == false)
            return i;
    }
}

int main()
{
    int numOfElements, arr[10];
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> arr[i];
    cout << "Smallest positive missing number is: " << smallestPositiveMissingNumber(numOfElements, arr) << endl;
    return 0;
}