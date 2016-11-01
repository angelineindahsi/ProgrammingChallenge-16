#include <iostream>
using namespace std;

template <class num>
num absoluteValue(num number)
{
    if(number<0)
        return number * -1;
    else
        return number;
}

int main()
{
    int a;
    int b;
    
    cout << "Enter a positive number: ";
    cin >> a;
    cout << "Enter a negative number: ";
    cin >> b;
    cout << "The absolute value of " << a << " is ";
    cout << absoluteValue(a) << endl;
    cout << "The absolute value of " << b << " is ";
    cout << absoluteValue(b) << endl;
    
    return 0;
}
