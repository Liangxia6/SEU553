// 写一个IntToStr（int a）函数
// 将一个整形数转换为字符串

#include <iostream>
#include <string>
#include <algorithm>

std::string intToStr(int num)
{
    // 处理负数的情况
    if (num == 0)
        return "0"; // 特殊情况，0 的处理
    bool isNegative = false;
    if (num < 0)
    {
        isNegative = true;
        num = -num; // 变成正数
    }

    std::string result = "";

    // 提取数字的每一位
    while (num > 0)
    {
        result += (num % 10) + '0'; // 获取当前最低位并转为字符
        num /= 10;                  // 移除最低位
    }

    // 如果是负数，添加负号
    if (isNegative)
    {
        result += '-';
    }

    // 反转字符串
    std::reverse(result.begin(), result.end());

    return result;
}

int main()
{
    int num = -12345;
    std::string str = intToStr(num);
    std::cout << "The number as string: " << str << std::endl;
    return 0;
}