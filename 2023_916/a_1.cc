// 读程序

#include <iostream>
using namespace std;

void fun1(char *s1, char *s2)
{
    int i = 0;
    for (; *s1 == *s2; s1++, s2++)
    {
        i++;
    }
    cout << s1 << endl;
    cout << i << endl;
}
void fun2(char *&s1, char *&s2)
{
    int i = 0;
    for (; *s1 == *s2; s1++, s2++)
    {
        i++;
    }
    *(s1 - 1) = '\0';
    *(s2 - 1) = '\0';
}
int main()
{
    char string1[] = "I love Nanjing";
    char string2[] = "I love Southeast University";
    char *p1 = string1;
    char *p2 = string2;
    fun1(p1, p2);
    fun2(p1, p2);
    cout << p1 << endl;
    cout << p2 << endl;
    cout << string1 << endl;
    cout << string2 << endl;
    return 0;
}