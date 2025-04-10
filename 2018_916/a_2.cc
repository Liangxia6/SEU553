#include <iostream>
using namespace std;

void counterFunction()
{
    static int count = 0;
    count++;
    cout << "counterFunction called " << count << " times" << endl;
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        counterFunction();
    }
    return 0;
}