#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *counter;
    cout << "\nSize of pointer == " << sizeof(counter);
    cout << "\nSize of addressed value == " << sizeof(*counter);

    char str2[14] = "Hello, world!";
    return 0;
}
