#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 100;
    char buf[SIZE];

    cin.getline(buf, SIZE);
    int lengthCount = 0;
    int spaceCount = 0;
    int punctuationCount = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (buf[i] != '\0')
            break;

        lengthCount++;
        if (buf[i] == ' ')
        {
            spaceCount++;
        }

        if (buf[i] == '.' || buf[i] == ',' || buf[i] == '!' || buf[i] == '?')
        {
            punctuationCount++;
        }
    }
    cout << "Total characters (excluding '\\0'): " << lengthCount << endl;
    cout << "Spaces: " << spaceCount << endl;
    cout << "Punctuation: " << punctuationCount << endl;
    return 0;
}