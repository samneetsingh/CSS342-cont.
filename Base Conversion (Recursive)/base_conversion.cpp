// base_conversion.cpp 
// Convert decimal number to new base, recursively

#include <iostream>
#include <string>
using namespace std;

bool BaseConversion(int num, int base, string& ans);

int main()
{
    int number, base;
    string ans = "";
    cout << "Input a number and a base: ";
    cin >> number >> base;
    BaseConversion(number, base, ans);
    cout << number << " base " << base << " = " << ans << endl;
}

bool BaseConversion(int num, int base, string& ans)
{
    const string static digit_array = "0123456789ABCDEF";
    if ((num < 0) || (base <= 1) || (base > 16))
    {
        return false;
    }
    if (num < base)
    {
        ans = digit_array[num] + ans;
        return true;
    }
    else
    {
        ans = digit_array[num % base] + ans;
        BaseConversion(num / base, base, ans);
        return true;
    }
}
