#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    a = 1;
    cout << "Таблица умножения на 2" << endl;
    while (a <= 10)
    {
        b = 2 * a;
        cout << "2 * " << a << " = " << b << endl;
        a++;
    }
    a = 1;
    cout << "Таблица умножения на 3" << endl;
    while (a <= 10)
    {
        b = 3 * a;
        cout << "3 * " << a << " = " << b << endl;
        a++;

    }
    a = 1;
    cout << "Таблица умножения на 4" << endl;
    while (a <= 10)
    {
        b = 4 * a;
        cout << "4 * " << a << " = " << b << endl;
        a++;

    }
    a = 1;
    cout << "Таблица умножения на 5" << endl;
    while (a <= 10)
    {
        b = 5 * a;
        cout << "5 * " << a << " = " << b << endl;
        a++;

    }
    return 0;
}
