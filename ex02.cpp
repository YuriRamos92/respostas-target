#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "digite um número inteiro: " << endl;
    cin >> num;

    int i = 0, j = 1;

    while (j < num)
    {
        int aux = i;
        i = j;
        j = aux + j;
    }
    if (j == num)
        cout << num << " pertence a sequencia de fibonacci" << endl;
    else
        cout << num << " não pertence a sequencia de fibonatti" << endl;
    return 0;
}