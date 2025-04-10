#include <iostream>
using namespace std;

int main()
{
    int a = 4, c = 0, b = 7;
    for (int i = 0; i < 5; i++)
    {
        switch ((--a) > 0)
        {
        case 0:
            switch (c++)
            {
            case 0:
                cout << "%";
            case 1:
                cout << "#";
            }
            // break;
        case 1:
            switch (b > 0)
            {
            case 0:
                cout << "*";
                --b;
                break;
            case 1:
                cout << "@";
                --b;
                break;
            }
        default:
            cout << "&";
        }
        cout << "!" << endl;
    }
    return 0;
}

//@