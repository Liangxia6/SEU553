// #include <iostream>
// #include <string>
// #include <cstring>
// using namespace std;

// void replace(char *b, char *a, char *c)
// {
//     string str(b);
//     int pos = str.find(a);
//     string befor = str.substr(0, pos);
//     string after = str.substr(pos + strlen(a), str.length());
//     str = befor + c + after;
//     cout << str;
// }

// int main(int argc, char const *argv[])
// {
//     char *b = "I love nanjing, I love China";
//     char *a = "love";
//     char *c = "like";
//     replace(b, a, c);

//     return 0;
// }

#include <iostream>

int main()
{
    for (int i = 1; i <= 3; ++i)
    {
        switch (i)
        {
        case 1:
            std::cout << "Case 1\n";
            continue; // continue 会跳过外层 for 循环的当前迭代
        case 2:
            std::cout << "Case 2\n";
        case 3:
            std::cout << "Case 3\n";
            break;
        }
        std::cout << "=====<<endl;";
    }
    return 0;
}