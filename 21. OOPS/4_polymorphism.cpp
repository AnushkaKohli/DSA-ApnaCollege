#include <iostream>
using namespace std;

// Operator overloading
class Complex
{
private:
    int real, imaginary;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }
    Complex operator+(Complex &obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.imaginary = imaginary + obj.imaginary;
        return result;
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1(5, 4), c2(2, 5);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}