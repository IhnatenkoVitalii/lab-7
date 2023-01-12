#include <iostream>
#include <windows.h>

using namespace std;
void foo()
{
    cout << "I function called me" << endl;
}
int Sum(int a, int b)
{
    int result;
    result = a + b;
    return result;

    return a + b;
}
//Виклик//
void main()
{
    foo();
    int c = Sum(23, 76);
    cout << c << endl;
    int x, y;
    cout << "Enter the value x" << endl;
    cin >> x;
    cout << "Enter the value y" << endl;
    cin >> y;
    cout << Sum(x, y) << endl;
}