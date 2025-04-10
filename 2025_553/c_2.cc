#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person
{
private:
    int id;

public:
    Person(int i = 000) : id(i)
    {
    }
    virtual int printObj()
    {
    }
};

class Employee : public Person
{
private:
    int salary;

public:
    Employee(int i = 000, int sa = 0) : Person(i), salary(sa)
    {
    }
    int printObj() override
    {
    }
};

class Manager : public Person
{
private:
    int wage;
    int rate;

public:
    Manager(int i = 000, int w = 0, int r = 0) : Person(i), wage(w), rate(r)
    {
    }

    int printObj() override
    {
    }
};

class Company
{
private:
    Person **people;
    int size;

public:
    Company(int siz) : size(siz)
    {
        people = new Person *[siz];
    }
    ~Company()
    {
        delete[] people;
    }

    Person *&operator[](int index)
    {
        return people[index];
    }

    void save(char *filename)
    {
        ofstream file(filename);
        for (int i = 0; i < size; i++)
        {
            string s = "wage:" + to_string(people[i]->printObj());
            cout << s << endl;
        }
        file.close();
    }
};

int main()
{
    Company Apple(4); // 创建 Company 对象，包含 4 名员工

    // 创建并存储 Employee 和 Manager 对象
    Apple[0] = new Employee(2000, 320.1);
    Apple[1] = new Employee(2002, 322.5);
    Apple[2] = new Manager(3001, 400.5, 0.2);
    Apple[3] = new Manager(3002, 506.5, 0.3);

    // 输出每个员工信息
    for (int i = 0; i < 4; ++i)
    {
        Apple[i]->printObj();
    }

    // 将员工信息保存到文件
    Apple.save("AppData.txt");

    return 0;
}