#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void find_max(int(&arr)[3], int*);
int main()
{
    srand(time(NULL));
    int arr[3] = {0};
    int *ptr = 0;
    for (auto &i:arr) i = rand()%10+1;
    find_max(arr, ptr);
    return 0;
}
void find_max(int(&arr)[3], int* Max)
{
    Max = arr;
    for (auto i: arr) if (i > *Max) Max = &i;
    cout << "Max: " << *Max << endl;
}

