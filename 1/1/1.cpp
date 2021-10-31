#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, x, x1, x2, D;
    char v;
    v = 'i';
    cout << "Введите значения a, b и c" << endl;
    cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        x1 = (-b - sqrt(D)) / (2*a);
        x2 = (-b + sqrt(D)) / (2*a);
        cout << "Ответ: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    if (D == 0)
    {
        x = (-b) / (2*a);
        cout << "Ответ: x = " << x << endl;
    }
    if (D < 0)
    {
        x1 = -b / (2 * a);
        x2 = sqrt(-D) / (2 * a);
        cout << "Ответ: x1 = " << x1 << " - i*" << x2 << ", x2 = " << x1 << " + i*" << x2 << endl;
    }
    return 0;
}

