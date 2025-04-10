// 读程序
// 考点:递归构造函数，基类虚函数

#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    string name;
    person(string n = "per")
    {
        name = n;
    }
    virtual void print()
    {
        cout << "name : " << name << endl;
    }
};

class student : public person
{
public:
    string studentName;
    student(string stu = "stu")
    {
        studentName = stu;
    }
    void print()
    {
        person::print();
        cout << "studentName : " << studentName << endl;
    }
};

class perStudent : public student
{
public:
    string perS;

public:
    perStudent(string p = "pers")
    {
        perS = p;
    }
    void print()
    {
        student::print();
        cout << "perS : " << perS << endl;
    }
};

int main()
{
    person p("p1");
    student stu("s1");
    perStudent per("per1");
    person *pr = &p;
    pr->print();
    pr = &stu;
    pr->print();
    pr = &per;
    pr->print();
    return 0;
}