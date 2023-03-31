#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "sequencia a" << endl;

    int num1 = 1;
    for (int i = 0; i < 5; i++)
    {
        cout << num1 << ' ';
        num1 += 2;
    }
    cout << endl;
    cout << "sequencia b" << endl;
    int num2 = 2;
    for (int i = 0; i < 7; i++)
    {
        cout << num2 << ' ';
        num2 *= 2;
    }
    cout << endl;

    cout << "sequencia c" << endl;
    int num3 = 0;
    for (int i = 0; i < 7; i++)
    {
        num3 = i * i;
        cout << num3 << ' ';
    }
    cout << endl;

    cout << "sequencia d" << endl;
    int num4 = 4;
    cout << num4 << ' ';
    for (int i = 1; i < 5; i++)
    {
        num4 = (2 * i + 2) * (2 * i + 2);
        cout << num4 << ' ';
    }
    cout << endl;

    cout << "sequencia e" << endl;
    int num5 = 1, num6 = 1, aux = 0;
    cout << num5 << ' ' << num6 << ' ';
    for (int i = 2; i < 7; i++)
    {
        aux = num5 + num6;
        cout << aux << ' ';
        num5 = num6;
        num6 = aux;
    }
    cout << endl;

    cout << "sequencia f" << endl;
    int num7 = 2, num8 = 10;
    cout << num7 << ' ' << num8 << ' ' << (num7 + num8) << ' ' << (num7 * 8) << ' ';
    for (int i = 1; i < 5; i++)
    {
        cout << ((num7 * 8) + i) << ' ';
    }
    return 0;
}
