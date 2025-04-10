/*2.编写简单的加密,解密程序.在main()函数中接收需要加密的字符串，
进行加密。加密时，将字符指针+1，Encrpy的参数为字符指针。
解密时将字符指针-1，Decrpy的参数亦为字符指针。*/

#include <iostream>
using namespace std;

// 加密函数，参数为字符指针
void Encrypt(char *str)
{
    while (*str)
    {             // 遍历字符串，直到遇到字符串结束符 '\0'
        (*str)++; // 每个字符加 1
        str++;    // 移动指针到下一个字符
    }
}

// 解密函数，参数为字符指针
void Decrypt(char *str)
{
    while (*str)
    {             // 遍历字符串，直到遇到字符串结束符 '\0'
        (*str)--; // 每个字符减 1
        str++;    // 移动指针到下一个字符
    }
}

int main()
{
    char input[100]; // 用来存储输入的字符串

    cout << "请输入要加密的字符串：";
    cin.getline(input, 100); // 接收用户输入的字符串，最多输入 100 个字符

    cout << "原始字符串: " << input << endl;

    // 加密
    Encrypt(input);
    cout << "加密后的字符串: " << input << endl;

    // 解密
    Decrypt(input);
    cout << "解密后的字符串: " << input << endl;

    return 0;
}