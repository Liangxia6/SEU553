/*
写一个日期Date类
成员有年月日，成员函数有无参数构造函数、设置年月日的函数setDate
还有一个打印函数display 3 个
*/

#include <iostream>
using namespace std;

class Date
{
private:
    int year;
    int mon;
    int day;

public:
    Date(/* args */) : year(2025), mon(3), day(18) {}
    ~Date() {}
    void setDay(int y, int m, int d)
    {
        year = y;
        mon = m;
        day = d;
    }
    void display()
    {
        cout << "year:" << year << endl;
        cout << "mon:" << mon << endl;
        cout << "day:" << day << endl;
    }
};

int main(int argc, char const *argv[])
{
    Date a;
    a.display();
    return 0;
}
