/*编写一个Teacher类，要求类含有教师编号，姓名，性别，出生年月，入职年月。
以及以下成员函数：
（1）带有默认参数的构造函数(默认出生年月为1900-00-00),复制构造函数。
（2）2016年进行新一轮聘用，男教师满55岁，女教师满60岁，
则到退休年龄，编写函数输出应退休的教师姓名和编号。
（3）如果满退休年龄的女教师入职时间未满35年，则继续聘用，
编写函数输出应继续聘用的满退休年龄的女教师的姓名和编号。
（4）编写main函数来测试你所设计的类。
*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Teacher
{
private:
    string id;        // 教师编号
    string name;      // 姓名
    string gender;    // 性别
    string birthDate; // 出生年月，格式：YYYY-MM-DD
    string hireDate;  // 入职年月，格式：YYYY-MM-DD

public:
    // 带有默认参数的构造函数
    Teacher(string id = "", string name = "", string gender = "", string birthDate = "1900-00-00", string hireDate = "")
        : id(id), name(name), gender(gender), birthDate(birthDate), hireDate(hireDate) {}

    // 复制构造函数
    Teacher(const Teacher &other)
    {
        id = other.id;
        name = other.name;
        gender = other.gender;
        birthDate = other.birthDate;
        hireDate = other.hireDate;
    }

    // 获取教师的出生年份
    int getBirthYear() const
    {
        return stoi(birthDate.substr(0, 4));
    }

    // 获取教师的入职年份
    int getHireYear() const
    {
        return stoi(hireDate.substr(0, 4));
    }

    // 获取教师的年龄
    int getAge(int year) const
    {
        return year - getBirthYear();
    }

    // 获取教师的入职年数
    int getYearsOfService(int year) const
    {
        return year - getHireYear();
    }

    // 输出教师的基本信息
    void printInfo() const
    {
        cout << "ID: " << id << ", Name: " << name << ", Gender: " << gender
             << ", BirthDate: " << birthDate << ", HireDate: " << hireDate << endl;
    }

    // 判断是否需要退休
    bool isRetirementAge(int year) const
    {
        if (gender == "Male" && getAge(year) >= 55)
        {
            return true;
        }
        else if (gender == "Female" && getAge(year) >= 60)
        {
            return true;
        }
        return false;
    }

    // 判断是否继续聘用（退休年龄女教师入职未满35年）
    bool isRehiredFemale(int year) const
    {
        if (gender == "Female" && getAge(year) >= 60 && getYearsOfService(year) < 35)
        {
            return true;
        }
        return false;
    }

    // 静态函数，输出应退休的教师
    static void printRetiredTeachers(Teacher teachers[], int count, int year)
    {
        cout << "Teachers to retire in " << year << ":\n";
        for (int i = 0; i < count; ++i)
        {
            if (teachers[i].isRetirementAge(year))
            {
                cout << teachers[i].name << " (ID: " << teachers[i].id << ")\n";
            }
        }
    }

    // 静态函数，输出继续聘用的教师
    static void printRehiredFemales(Teacher teachers[], int count, int year)
    {
        cout << "Female teachers to rehire in " << year << ":\n";
        for (int i = 0; i < count; ++i)
        {
            if (teachers[i].isRehiredFemale(year))
            {
                cout << teachers[i].name << " (ID: " << teachers[i].id << ")\n";
            }
        }
    }
};

int main()
{
    // 创建教师对象数组
    Teacher teachers[5] = {
        Teacher("T001", "Alice", "Female", "1955-06-15", "1990-09-01"),
        Teacher("T002", "Bob", "Male", "1960-08-10", "1992-08-01"),
        Teacher("T003", "Charlie", "Male", "1965-04-25", "1995-04-15"),
        Teacher("T004", "Diana", "Female", "1965-02-20", "1992-02-01"),
        Teacher("T005", "Eve", "Female", "1960-03-10", "1985-03-20")};

    int currentYear = 2025; // 当前年份（聘用年份）

    // 输出应退休的教师
    Teacher::printRetiredTeachers(teachers, 5, currentYear);

    // 输出继续聘用的满退休年龄但入职未满35年的女性教师
    Teacher::printRehiredFemales(teachers, 5, currentYear);

    return 0;
}
