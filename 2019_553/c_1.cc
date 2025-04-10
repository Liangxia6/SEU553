#include <iostream>
using namespace std;

class Acc
{
    // char ch = 0; // 不建议赋值
    char ch; // 修改后
    // char &rise()
    // {
    //     return ++ch; // rise函数应为public
    // }

public:
    Acc(char c) : ch(c)
    {
    }
    char &rise()
    {
        return ++ch; // 修改后
    }
};

int main()
{
    // Acc aa("W"); // 初始化传入字符'W'
    Acc aa('W');         // 修改后
    cout << ++aa.rise(); // 无权限调用
    cout << aa.rise();   // 无权限调用
    return 0;
}