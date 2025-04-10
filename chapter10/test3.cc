#include <iostream>
#include <cstring>
#include<
using namespace std;

int fun(int x)
{
    return x *= 2;
}

int main(int argc, char const *argv[])
{
    char s[20];
    char s2[3] = {'e', 'e', 'e'};
    const char *p = "Hellooo wd";
    strcpy(s, p);
    s2[1] = 'p';

    // cout << strstr(s, "ll");

    cout << "-------" << endl;
    memset(s, '0', 5);
    // cout << s;
    int x = 8;
    cout << fun(x);
    return 0;
}
