#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int* init()
{
    srand(time(NULL));
    int const size = rand()%100;
    int* arr = new int[size];
    cout << endl;
}

int main()
{
    init();
    return 0;
}
