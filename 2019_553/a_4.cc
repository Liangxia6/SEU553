#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    char s[] = "012wtr\0 wer09";
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            ++n;
        }
    }
    cout << "n=" << n << endl;
    return 0;
}