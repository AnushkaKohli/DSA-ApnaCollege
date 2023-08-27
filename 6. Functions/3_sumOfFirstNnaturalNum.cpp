#include <iostream>
using namespace std;

int sumOfnNum(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
        sum += i;
    return sum;
}

int main()
{
    int num;
    cout << "Enter the number of natural numbers: ";
    cin >> num;
    cout << "Sum of first " << num << " natural numbers is " << sumOfnNum(num) << endl;
    return 0;
}