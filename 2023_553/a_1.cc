// 读程序出结果

#include <iostream>
using namespace std;

int x = 6;

int main(int argc, char const *argv[])
{
    int x = 5;
    {
        int x = 0;
        cout << x++ << endl;
        cout << ::x << endl;
        cout << x << endl;
        if (x / 2)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "flase" << endl;
        }
    }
    return 0;
}

//0  6  1  false