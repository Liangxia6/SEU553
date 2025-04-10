#include <iostream>
using namespace std;

int func(char *s1, char *s2)
{
    if (*s1 == '\0' || *s2 == '\0')
    {
        return 0; // (1)
    }
    if (*s1 == *s2)
    { // (2)
        cout << *s1 << "==" << *s2 << endl;
        return func(++s1, ++s2) + 1; // (3)
    }
    else
    {
        cout << *s1 << "!=" << *s2 << endl;
        return func(++s1, ++s2);
    }
}

int main()
{
    // 统计并输出两个字符串相同的字符，输出个数
    char str1[] = "hello";
    char str2[] = "hairo";

    int count = func(str1, str2);
    cout << count << endl;

    return 0;
}