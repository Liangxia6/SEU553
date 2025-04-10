// 定义一个"数据类型" datatype 类，能处理包含字符型、整型、浮点型三种类型的数
// 据，给出其构造函数。

// 参考答案
#include <iostream>
using namespace std;
class datatype
{
    enum
    {
        character,
        integer,
        floating_point
    } vartype;
    union
    {
        char c;
        int i;
        float f;
    };

public:
    datatype(char ch)
    {
        vartype = character;
        c = ch;
    }
    datatype(int ii)
    {
        vartype = integer;
        i = ii;
    }
    datatype(float ff)
    {
        vartype = floating_point;
        f = ff;
    }
    void print();
};
void datatype::print()
{
    switch (vartype)
    {
    case character:
        cout << "string:" << c << endl;
        break;
    case integer:
        cout << "int:" << i << endl;
        break;
    case floating_point:
        cout << "float:" << f << endl;
        break;
    }
}
int main()
{
    datatype A('c'), B(12), C(1.44F);
    A.print();
    B.print();
    C.print();
    return 0;
}