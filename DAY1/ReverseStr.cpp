#include <iostream>
using namespace std;
string reverse(string str)
{
    if (str.length() <= 1)
        return str;

    return reverse(str.substr(1)) + str[0];
}
int main()
{
    string str = "hello";
    string ans = reverse(str);
    cout << "reverse string:" << ans << endl;
    return 0;
}