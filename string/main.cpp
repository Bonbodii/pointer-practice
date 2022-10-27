#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while (cin >> str)
    {
        for (char&i: str) i+=(str.back() - '0');
        str.pop_back();
        cout << str << endl;
    }
}
