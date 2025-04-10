// 读程序

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student()
    {
        num++;
    }
    ~Student() { num--; }
    static int num;

private:
    string name;
};
int Student::num = 0;

class Undergraduate : public Student
{
public:
    Undergraduate(int i = 0, float s = 100)
    {
        id = i;
        score = s;
        num++;
    }
    ~Undergraduate() { num--; }
    static int num;

private:
    int id;
    float score;
};
int Undergraduate::num = 0;

class Postgraduate : public Student
{
public:
    Postgraduate(string s = "UNDK", string n = "KDS")
    {
        sa = s;
        na = n;
        num++;
    }
    ~Postgraduate() { num--; }
    static int num;

private:
    string sa, na;
};
int Postgraduate::num = 0;

int num = 100;
Undergraduate ug(1);
Postgraduate p;
int main()
{
    int num = 0;
    // 这里所有的输出都简写了，因为记不得，其实原题是有部分英文的
    // 诸如 "There are" << num << "students" 之类的，不影响考点
    cout << num << endl;
    cout << ::num << endl;
    cout << ug.num << endl;
    cout << p.num << endl;
    cout << Student::num << endl;
    {
        Undergraduate u1;
        Postgraduate p1;
        cout << u1.num << endl;
        cout << p1.num << endl;
        cout << Student::num << endl;
    }
    Undergraduate *u = new Undergraduate;
    cout << Undergraduate::num << endl;
    cout << Postgraduate::num << endl;
    cout << Student::num << endl;
    delete u;
    cout << Undergraduate::num << endl;
    cout << Postgraduate::num << endl;
    cout << Student::num << endl;
}