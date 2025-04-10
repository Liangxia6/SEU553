/*定义一个Employee 类，其中包括表示姓名、街道地址、城市和邮编等属性，包括
chage_name()和 display()等函数；display()使用 cout 语句显示姓名、街道地址、城市和
邮编等属性，函数change_name()改变对象的姓名属性，实现并测试这个类。 */

// 考察深拷贝构造

#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
private:
    char name[30];
    char number[30];

public:
    Employee(const char *na, const char *nu)
    {
        strcpy(name, na);
        strcpy(number, nu);
    }
    Employee(Employee &emp)
    {
        strcpy(name, emp.name);
        strcpy(number, emp.number);
    }
    void display()
    {
        cout << name << " " << number << endl;
    }
};

int main(int argc, char const *argv[])
{
    Employee e("hhy", "3524");
    Employee ee = e;
    ee.display();
    return 0;
}
