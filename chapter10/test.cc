#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream of;
    of.open("./build/hello.txt", ios::app);
    // of << "hehe" << endl;
    char *s1 = "hidhfhsd\0";
    of.write(s1, 20);
    of.write(s1, 20);
    // ifstream inf;
    // inf.open("./build/hello.txt");
    // string s;

    // 只读到空格
    //  inf >> s;
    //  cout << s;

    // 读完
    // while (getline(inf, s))
    // {
    //     cout << s << endl;
    // }

    // 读完
    // cout << "-------" << endl;
    // char ch[200];
    while (inf.getline(ch))

    //     cout << ch << endl;

    // cout << char(inf.get());
    // // 读到buff容量
    // char buff[400];
    // inf.read(buff, sizeof buff);
    // cout << buff;
    of.close();
    return 0;
}