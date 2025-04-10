/*定义一个Cat 类，拥有静态数据成员HowManyCats，记录Cat的个体数目；静态成员函
数GetHowMany（），存取HowManyCats。设计程序测试这个类，体会静态数据成员和静态
成员函数的用法。 */

#include <iostream>
using namespace std;

class Cat
{
private:
    int a;

public:
    Cat(int aa) : a(aa)
    {
        HowManyCat++;
    }
    Cat()
    {
        HowManyCat++;
    }
    static int HowManyCat;
    static int GetHowMany()
    {
        return HowManyCat;
    }
};

int Cat::HowManyCat = 0;

int main()
{
    Cat a(1);
    Cat c();
    Cat b(3);
    cout << a.GetHowMany();
}