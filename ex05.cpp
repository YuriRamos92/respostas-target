#include <iostream>
#include <string>

using namespace std;

int main()
{

    string palavra;
    cout << "digite uma palavra: ";
    getline(cin, palavra);

    int i = 0;
    while (palavra[i] != '\0')
    {
        i++;
    }
    int j = i;
    for (i = 0; i < j / 2; i++)
    {
        char temp = palavra[i];
        palavra[i] = palavra[j - i - 1];
        palavra[j - i - 1] = temp;
    }

    cout << "A string invertida e: " << s << endl;

    return 0;
}
