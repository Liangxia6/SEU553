/*设计一个用于人事管理的People（人员）类。考虑到通用性，这里只抽象出所有类型
人员都具有的属性：number（编号）、sex（性别）、birthday（出生日期）、id（身份证
号）等等。其中"出生日期"定义为一个"日期"类内嵌子对象。用成员函数实现对人员信息
的录入和显示。要求包括：构造函数和析构函数、拷贝构造函数、内联成员函数、带缺省
形参值的成员函数、聚集。 */

#include <iostream>
#include <string>
using namespace std;

enum SEX
{
    man,
    woman
};

class Date
{
public:
    Date(int y, int m, int d) : year_(y), month_(m), day_(d) {}
    void getDate()
    {
        cout << year_ << "." << month_ << "." << day_;
    }

private:
    int year_;
    int month_;
    int day_;
};

class People
{
    friend void printMassage(People &);

public:
    People(string number = "000", SEX sex = man, int year = 0, int month = 0, int day = 0, string id = 0) : number_(number), sex_(sex), birthday_(year, month, day), id_(id)
    {
        cout << "in People constractor" << endl;
    }
    ~People()
    {
        cout << "in People distractor" << endl;
    }

    People(const People &other) : number_(other.number_), sex_(other.sex_), birthday_(other.birthday_), id_(other.id_)
    {
        cout << "in copy constructor" << endl;
    }

    inline void setNumber(int num) { number_ = num; }

private:
    string number_;
    SEX sex_;
    Date birthday_;
    string id_;
};

void printMassage(People &people)
{
    cout << "number:" << people.number_ << endl;
    cout << "birthday:";
    people.birthday_.getDate();
    cout << endl;
}

int main()
{
    People peo("12345", woman, 2003, 6, 10, "21900");
    People peo2 = peo;
    People peo3(peo);
    printMassage(peo3);
    return 0;
}
