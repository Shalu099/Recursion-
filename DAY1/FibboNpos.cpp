#include <iostream>
using namespace std;
int fibb(int n)
{
    if (n <= 1)
        return n;
    else
        return fibb(n - 1) + fibb(n - 2);
}
int main()
{
    int n = 6;
    cout << "Fibbonacci number at position: " << n << " is " << fibb(n) << endl;
    ;
    return 0;
}