/*编写函数int index(char *s， char *t)，返回字符串 t 在字符串 s 中出现的最左
边的位置，如果在s中没有与t匹配的子串，就返回-1。 */

#include <iostream>
using namespace std;

int index(char *s, char *t)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        for (int k = i, j = 0; t[j] != '\0' && s[k] == t[j]; j++, k++)
        {
            if (t[j + 1] == '\0')
            {
                return i + 1;
            }
        }
    }
    return -1;
}

int main()
{
    char *s = "isadfhjoasdsdfoiweh";
    char *t = "sdf";
    cout << index(s, t);
    return 0;
}

// int main()
// {
//     char a[10] = {'a', 'b', 'c'};
//     char *b = "abc";
//     char *b2 = a;
//     string c = a;
//     string d = b;
//     vector<char> e = {'a', 'b', 'c'};
//     int i = 3;
//     if (a[i] == '\0')
//         cout << "ahave  ";
//     if (b[i] == '\0')
//         cout << "bhave  ";
//     if (b2[i] == '\0')
//         cout << "b2have  ";
//     if (c[i] == '\0')
//         cout << "chave  ";
//     if (d[i] == '\0')
//         cout << "dhave  ";
//     if (e[i] == '\0')
//         cout << "ehave  ";
// }

// // ahave  bhave  b2have  chave  dhave 
