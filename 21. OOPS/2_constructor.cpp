#include <iostream>
using namespace std;

class Student
{
    string name;

public:
    int age;
    bool gender;
    void setName(string s)
    {
        name = s;
    }
    void getName()
    {
        cout << name << endl;
    }
    void printInformation()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
    Student()
    {
        cout << "Default constructor" << endl;
    }
    Student(string s, int a, bool g)
    {
        cout << "Parameterised constructor" << endl;
        name = s;
        age = a;
        gender = g;
    }
    Student(Student &a)
    {
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    ~Student()
    {
        cout << "Destructor called" << endl;
    }
    // Operator overloading
    bool operator==(Student &a)
    {
        if (age = a.age && gender == a.gender)
            return true;
        else
            return false;
    }
};

int main()
{
    Student arr[3];
    cout << "Enter the information of students: " << endl;
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        arr[i].setName(s);
        cin >> arr[i].age;
        cin >> arr[i].gender;
    }
    Student a("Urvi", 20, 1);
    a.printInformation();
    Student b;
    b.printInformation();
    Student c = a;
    c.printInformation();
    Student d(a);
    d.printInformation();
    if (c == a)
        cout << "Same" << endl;
    else
        cout << "Not same" << endl;

    return 0;
}