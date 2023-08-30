// PROBLEM
// Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.

// CONSTRAINTS
// 1 <= N <= 10^5
// 0 <= Ai <= 10^10

// EXAMPLE
// Input:
// N = 5, S = 12
// A[] = {1,2,3,7,5}
// Output: 2 4
// Explanation: The sum of elements from 2nd position to 4th position is 12.

#include <iostream>
using namespace std;

void subarrayWithGivenSum(int size, int arr[], int sum)
{
    int startingIndex = 0, endingIndex = 0, currentSum;
    while (endingIndex < size)
    {
        currentSum = arr[startingIndex];
        if (currentSum == sum)
        {
            cout << "The subarray with sum " << sum << " has starting index " << startingIndex + 1 << " and ending index " << endingIndex << endl;
            return;
        }
        else if (currentSum < sum)
            currentSum += arr[endingIndex++];
        else
            currentSum -= arr[startingIndex++];
    }
    cout << "No subarray found with given sum" << endl;
}

int main()
{
    int numOfElements, arr[10], sum;
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> arr[i];
    cout << "Enter sum: ";
    cin >> sum;
    subarrayWithGivenSum(numOfElements, arr, sum);
    return 0;
}