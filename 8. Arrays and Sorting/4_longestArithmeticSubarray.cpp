// PROBLEM
// An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

// Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithmetic subarray.

// INPUT
// The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Ai.

// OUTPUT
// For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the length of the longest contiguous arithmetic subarray.

// CONSTRAINTS
// Time limit: 20 seconds per test set.
// Memory limit: 1GB.
// 1 ≤ T ≤ 100
// 0 ≤ Ai ≤ 10^9
// Test Set 1
// 2 ≤ N ≤ 2000
// Test Set 2
// 2 ≤ N ≤ 2 x 10^5 for at most 10 test cases
// For the remaining cases, 2 ≤ N ≤ 2000

#include <iostream>
#include <algorithm> //To use max
using namespace std;

int longestArithmeticSubarray(int size, int arr[])
{
    int ans = 2, previousDifference = arr[1] - arr[0], i = 2, currentLength = 2;

    while (i < size)
    {
        if (arr[i] - arr[i - 1] == previousDifference)
            currentLength++;
        else
        {
            previousDifference = arr[i] - arr[i - 1];
            currentLength = 2;
        }
        ans = max(ans, currentLength);
        i++;
    }
    return ans;
}

int main()
{
    int numOfElements, arr[10];
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> arr[i];

    cout << "Length of longest arithmetic subarray is: " << longestArithmeticSubarray(numOfElements, arr) << endl;
    return 0;
}