/*3. 定义一个抽象 student类和两个派生类，分别为SEStudent，CSStudent， Student类中有一个名字数据成员，一个构造函数，SEStudent有1个数据成员: fee，一个构造函数，csStudent有两个数据成员:lowGradeFee，higeGradeFee,一个构造函数，要可以计算总学费与输出名字(如果有的话)
SEStudent 费用计算:fee*4
CSStudent 费用计算:lowGradeFee*0.5+higeGradeFee*0.5 (好像是，不太记得了)*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;

    Student(string s) : name(s) {}
    virtual void getFee() = 0;
};

class SEStudent : public Student
{
private:
    int fee;

public:
    SEStudent(string s, int f) : Student(s), fee(f) {}
    void getFee()
    {
        cout << name << endl;
        cout << fee * 4 << endl;
    }
};

class CSStudent : public Student
{
private:
    int lowGradeFee;
    int highGradeFee;

public:
    CSStudent(string s, int l, int h) : Student(s), lowGradeFee(l), highGradeFee(h) {}
    void getFee()
    {
        cout << name << endl;
        cout << lowGradeFee * 0.5 + highGradeFee * 0.5 << endl;
    }
};

int main(int argc, char const *argv[])
{
    SEStudent s1("lili", 500);
    CSStudent s2("bibi", 500, 3000);
    s1.getFee();
    s2.getFee();

    return 0;
}
