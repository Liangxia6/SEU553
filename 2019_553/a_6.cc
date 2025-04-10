#include <iostream>
using namespace std;
class Ccc
{
public:
    Ccc(int x, int y) : xx(x), yy(y)
    {
    }

    friend Ccc operator++(Ccc, int);
    void print()
    {
        cout << xx << "," << yy << endl;
    }

private:
    int xx;
    int yy;
};
Ccc operator++(Ccc c, int)
{
    c.xx++;
    c.yy++;
    return c;
}
int main()
{
    Ccc aa(10, 20);
    aa.print();
    for (int i = 0; i < 5; ++i)
    {
        aa = aa++;
    }
    aa.print();
    return 0;
}

/*
    (1)重载是类成员时候
    // 前置递增运算符重载
    Counter& operator++() {
        ++value;  // 先递增值
        return *this;  // 返回递增后的对象
    }

    // 后置递增运算符重载
    Counter operator++(int) {
        Counter temp = *this;  // 保存递增前的对象
        ++value;  // 递增对象
        return temp;  // 返回递增前的对象副本
    }

    (2)重载是友元时候
    // 声明友元函数
    friend Counter operator++(Counter& c);  // 前置递增
    friend Counter operator++(Counter& c, int);  // 后置递增

    // 友元函数：前置递增
    Counter& operator++(Counter& c) {
        ++c.value;  // 访问私有成员
        return c;   // 返回递增后的对象
    }

    // 友元函数：后置递增
    Counter operator++(Counter& c, int) {
        Counter temp = c;  // 保存递增前的对象
        ++c.value;         // 递增值
        return temp;       // 返回递增前的对象副本
    }
*/