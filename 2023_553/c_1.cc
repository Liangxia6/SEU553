/*对给定的字符串b，使用c来代替b中出现的a子串，
比如b为Ilove nanjing,Ilove China,a为 love，c为like，
则替换之后为Ilike nanjing, l like China.
函数原型为void replace(char* b,const char* a,const char* c)
(不可以使用标准模板)*/

#include <iostream>
#include <string.h>
using namespace std;

void replace(char *a, char *b, const char *c)
{
    int blen = strlen(b);
    int alen = strlen(a);
    int clen = strlen(c);

    int ai = 0, bi = 0, ci = 0, di = 0;
    char d[alen] = {};
    cout << "0" << endl;

    while (ai < alen)
    {
        cout << "1" << endl;
        int temp = ai;
        while (a[ai] == b[bi] && bi < blen && ai < alen)
        {
            cout << "2" << endl;
            ai++;
            bi++;
        }
        if (bi == blen)
        {
            while (ai < alen)
            {
                cout << "3" << endl;

                d[di] = a[ai];
                di++;
                ai++;
            }
            cout << "5" << endl;
            while (ci < clen)
            {
                cout << "4" << endl;
                a[temp] = c[ci];
                temp++;
                ci++;
                cout << "6" << endl;
            }
            di = 0;
            while (temp < ai)
            {
                a[temp] = d[di];
                temp++;
                di++;
            }
            a[temp] = '\0';
            return;
        }
        ai = temp + 1;
        bi = 0;
    }
    return;
}

int main()
{
    cout << "0" << endl;

    char a[] = {'I', ' ', 'l', 'o', 'v', 'e', ' ', 's', 'e', 'u'};
    char *b = "love";
    char *c = "like";
    cout << "0" << endl;

    replace(a, b, c);
    string ai = a;

    cout << a << endl;
}