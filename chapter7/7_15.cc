// 观察

#include <iostream>
using namespace std;

struct Basel
{
    int x;
};

struct Base2
{
    float y;
};

struct Derived : Basel, Base2
{
};

// int main()
// {
//     Derived *pd = new Derived;
//     pd->x = 1;
//     pd->y = 2.0f;

//     // void* pv=pd;
//     // Base2* pb=static_cast<Base2*>(pv); // 原来的代码是合法的，但通常不建议这么做

//     // 使用直接访问Base2部分
//     Base2 *pb = pd->Base2::y;

//     cout << pd->y << " " << pb->y << endl;

//     delete pd; // 正确删除Derived对象
//     return 0;
// }

// #include <iostream>
// using namespace std;
// struct Basel
// {
//     int x;
// };
// struct Base2
// {
//     float y;
// };
// struct Derived : Basel, Base2
// {
// };
int main()
{
    Derived *pd = new Derived;
    pd->x = 1;
    pd->y = 2.0f;
    void *pv = pd;
    Base2 *pb = static_cast<Base2 *>(pv);
    cout << pd->y << "" << pb->y << endl;
    delete pb;
    return 0;
}