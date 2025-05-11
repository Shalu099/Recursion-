#include <iostream>
using namespace std;

void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}
int main()
{
    int n = 10;
    print(n);
    return 0;
}