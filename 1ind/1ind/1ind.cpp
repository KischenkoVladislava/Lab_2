#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double n1, n2, n3, n;
    cout << "Введите 3 вещественных числа" << endl;
    cin >> n1 >> n2 >> n3;
    if ((n3 > n1) && (n3 > n2))
    {
        n = n1 * n2;
        cout << "Произведение наименьших 2 чисел из введенных" << n;
    }
    if ((n2 > n1) && (n2 > n3))
    {
        n = n1 * n3;
        cout << "Произведение наименьших 2 чисел из введенных" << n;
    }
    if ((n1 > n3) && (n1 > n2))
    {
        n = n2 * n3;
        cout << "Произведение наименьших 2 чисел из введенных " << n;
    }
    return 0;
}
