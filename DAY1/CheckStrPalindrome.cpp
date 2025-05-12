#include <iostream>
using namespace std;

bool isPalindrome(string s, int start, int end)
{

    if (start >= end)
        return true;

    if (s[start] != s[end])
        return false;

    return isPalindrome(s, start + 1, end - 1);
}

int main()
{
    string str = "madam";

    if (isPalindrome(str, 0, str.length() - 1))
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}
