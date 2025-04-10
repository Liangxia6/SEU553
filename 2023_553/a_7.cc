#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    char *a = "Ilove";
    char b[10];
    strcpy(b, a);
    cout << b;
    return 0;
}
