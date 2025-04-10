#include <iostream>
using namespace std;

class Student
{
public:
    Student() { cout << "Student +" << endl; };
    ~Student() { cout << "- Student" << endl; };
};
class Teacher
{
public:
    Teacher() { cout << "Teacher +" << endl; };
    ~Teacher() { cout << "- Teacher" << endl; };

private:
    Student stu;
};

int main()
{
    Teacher t;
    return 0;
}