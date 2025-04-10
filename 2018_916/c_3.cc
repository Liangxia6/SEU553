/*编写一个 employee 类
成员：
姓名
入职时间（可用年月或日期表示）
当前月收入
连续三年的业绩（以整数或浮点表示，如 0～10 分）
公司总人数
功能 / 要求：
完成构造函数、析构函数。
判断员工是否“加薪”或“辞退”（如三年业绩 >= 9 则加薪，三年业绩 <= 4
则可能辞退）。
计算并汇总所有员工的月工资总和、年工资总和（使用友元函数）。*/

// #include <iostream>
// #include <string>
// using namespace std;

// class employee
// {
//     friend bool Put_or_Remove(employee &e);
//     friend int getAvebyMon();
//     friend int getAvebyYear();

// private:
//     string name_;
//     int salary_;
//     int yeji_;

//     static int peoplenum_;
//     static int allsalary_;

// public:
//     employee(string name = "null", int salary = 0, int yeji = 0) : name_(name), salary_(salary), yeji_(yeji)
//     {
//         allsalary_ += salary;
//         peoplenum_++;
//     }
//     ~employee()
//     {
//         allsalary_ -= salary_;
//         peoplenum_--;
//     }
// };

// int employee::peoplenum_ = 0;
// int employee::allsalary_ = 0;

// bool Put_or_Remove(employee &e)
// {
//     if (e.yeji_ <= 4)
//     {
//         // e.~employee();
//     }
//     if (e.yeji_ >= 9)
//     {
//         e.salary_ += 300;
//     }
// }
// int getAvebyMon()
// {
//     return employee::allsalary_;
// }
// int getAvebyYear()
// {
//     return employee::allsalary_ * 12;
// }

// int main(int argc, char const *argv[])
// {
//     srand(time(0));
//     employee *e = new employee[20];
//     for (int i = 0; i < 20; i++)
//     {
//         e[i] = employee("a", rand() % 1000 + 3000, rand() % 10 + 1);
//     }
//     cout << getAvebyMon() << endl;
// }

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class employee
{
    friend bool Put_or_Remove(employee &e);
    friend int getAvebyMon();
    friend int getAvebyYear();

private:
    string name_;
    int salary_;
    int yeji_; // 业绩

    static int peoplenum_;
    static int allsalary_;

public:
    employee(string name = "null", int salary = 0, int yeji = 0) : name_(name), salary_(salary), yeji_(yeji)
    {
                allsalary_ += salary_;
        peoplenum_++;
    }
    employee &operator=(employee &e)
    {
        name_ = e.name_;
        salary_ = e.salary_;
        yeji_ = e.yeji_;
        allsalary_ += salary_;
        peoplenum_++;
    }

    ~employee()
    {
        allsalary_ -= salary_;
        peoplenum_--;
    }

    // 获取员工的薪资
    int getSalary() const
    {
        return salary_;
    }

    // 设置员工的薪资
    void setSalary(int newSalary)
    {
        salary_ = newSalary;
    }

    // 获取员工的业绩
    int getYeji() const
    {
        return yeji_;
    }
};

// 初始化静态成员
int employee::peoplenum_ = 0;
int employee::allsalary_ = 0;

// 判断是否加薪或辞退
bool Put_or_Remove(employee &e)
{
    if (e.yeji_ <= 1)
    {
        // 辞退员工
        cout << e.name_ << " has been removed." << endl;
        e.~employee();
        return false;
    }
    if (e.yeji_ >= 9)
    {
        // 加薪
        e.setSalary(e.getSalary() + 300);
        cout << e.name_ << " has received a raise." << endl;
        return true;
    }
    return false;
}

// 汇总所有员工的月薪总和
int getAvebyMon()
{
    return employee::allsalary_;
}

// 汇总所有员工的年薪总和
int getAvebyYear()
{
    return employee::allsalary_ * 12;
}

int main()
{
    srand(time(0));

    const int NUM_EMPLOYEES = 20;
    employee *employees = new employee[NUM_EMPLOYEES];

    // 随机生成员工信息
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        employees[i] = employee("Employee_" + to_string(i + 1), rand() % 10000 + 3000, rand() % 10 + 1);
    }

    // 执行加薪或辞退操作
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        // Put_or_Remove(employees[i]);
    }

    // 输出月薪总和和年薪总和
    cout << "Total monthly salary of all employees: " << getAvebyMon() << endl;
    cout << "Total annual salary of all employees: " << getAvebyYear() << endl;

    // 释放内存
    delete[] employees;

    return 0;
}
