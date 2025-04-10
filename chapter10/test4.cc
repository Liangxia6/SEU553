#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec = {3, 56, 23, 9, 65, 5, 0, 4};
    vector vec2(vec.begin(), vec.end());
    // cout << vec.at(2) << endl;
    return 0;
}
