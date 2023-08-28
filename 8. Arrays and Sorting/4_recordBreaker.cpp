// PROBLEM
// Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:
// ● The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
// ● Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
// Note that the very first day could be a record breaking day!
// Please help Isyana find out the number of record breaking days.

// INPUT
// The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Vi.

// OUTPUT
// For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of record breaking days.

// CONSTRAINTS
// Time limit: 20 seconds per test set.
// Memory limit: 1GB.
// 1 ≤ T ≤ 100.
// 0 ≤ Vi ≤ 2 × 10^5.
// Test set 1
// 1 ≤ N ≤ 1000.
// Test set 2
// 1 ≤ N ≤ 2 × 10^5 for at most 10 test cases.
// For the remaining cases, 1 ≤ N ≤ 1000.

#include <iostream>
using namespace std;

// Time Complexity - O(n^2)
int recordBreaker1(int size, int arr[])
{
    int recordBreakingDays = 0;
    if (size == 1)
        return 1;
    for (int currentDay = 0; currentDay < size; currentDay++)
    {
        int flag = 0;
        if (currentDay == 0)
        {
            if (arr[currentDay] > arr[currentDay + 1])
                recordBreakingDays++;
            continue;
        }
        for (int previousDay = currentDay - 1; previousDay >= 0; previousDay--)
        {
            if (arr[currentDay] <= arr[currentDay + 1] || arr[currentDay] <= arr[previousDay])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            recordBreakingDays++;
    }
    return recordBreakingDays;
}

// Time Complexity - O(n)
int recordBreaker2(int size, int arr[])
{
    int recordBreakingDays = 0;
    int maximum = -1;

    if (size == 1)
        return 1;

    for (int currentDay = 0; currentDay < size; currentDay++)
    {
        if (arr[currentDay] > maximum && arr[currentDay] > arr[currentDay + 1])
            recordBreakingDays++;
        maximum = max(maximum, arr[currentDay]);
    }
    return recordBreakingDays;
}

int main()
{
    int numOfElements, arr[10];
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> arr[i];
    cout << "Number of record breaking days is: " << recordBreaker1(numOfElements, arr) << endl;
    cout << "Number of record breaking days is: " << recordBreaker2(numOfElements, arr) << endl;
    return 0;
}