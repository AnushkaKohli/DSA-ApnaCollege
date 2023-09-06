// Print numbers till n in increasing and decreasing order using recursion

#include <iostream>
using namespace std;

void increasingOrder(int num)
{
    if (num == 1)
    {
        cout << num << endl;
        return;
    }
    increasingOrder(num - 1);
    cout << num << endl;
    return;
}

void decreasingOrder(int num)
{
    if (num == 1)
    {
        cout << num << endl;
        return;
    }
    cout << num << endl;
    decreasingOrder(num - 1);
    return;
}

int main()
{
    int numIncreasing, numDecreasing;
    cout << "Enter the number till which you want to print in increasing order: ";
    cin >> numIncreasing;
    cout << "Enter the number till which you want to print in decreasing order: ";
    cin >> numDecreasing;
    increasingOrder(numIncreasing);
    cout << endl;
    decreasingOrder(numDecreasing);
    cout << endl;
    return 0;
}